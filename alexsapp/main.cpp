#include "main.h"
#include <ckMenu.h>

CKTestAlexs* app;

int main() {

    // класс переименован ради тестов
	app = CKNew CKTestAlexs();

    // false - не использовать стандартные пункты меню
	CKMenuBar* menuBar = CKNew CKMenuBar(false);

	// добавляем свой пункт меню в Finder
	CKMenu* menuTests = CKNew CKMenu("Yo");
	menuBar->AddMenu(menuTests);

    // затем элемент в выпадающем списке
    CKMenuItem* item = CKNew CKMenuItem("Run me", 'R', [&item](CKEvent e) {
            // по клику произойдет отображение стандартного модального диалога
			app->CKNewMsgBoxNote("Welcome to old school!", "Hello world", "Mkay", "Quit", [](int button) {
            // если нажали Quit - завершить работу приложения.    
            if (button == 0) {
				app->CKQuit();
			 }
		   });
		});
	// связывание элемента с пунктом меню	
    menuTests->AddItem(item);
    // связывание меню с приложением
    app->CKSetMenu(menuBar);

    // бесконечный цикл ожидания для отрисовки, без которого приложение сразу завершится
	while (!app->CKLoop(5));

	delete app;
	return 0;
}