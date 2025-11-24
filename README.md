retro68-clapkit-sample-app
==================================

A small demo app, built with Clapkit and Retro68 

In action:
![Working demo](https://github.com/alex0x08/retro68-clapkit-sample-app/blob/main/images/alexs-clapkit-demoapp.png?raw=true)



### Prerequisites

You need to have Retro68 installed, with Apple Universal Interfaces (version 3.x; version 3.4 is tested):
https://github.com/autc04/Retro68/

### How to build

Change path to Retro68 build in CMake file:
```
  set(RETRO68_PATH "/opt/src/Retro68-build/toolchain/m68k-apple-macos")
```
Then run:
```
  mkdir build
  cd build
  cmake ..
```

Demo uses Clapkit framework (https://github.com/macinlink/clapkit/), sources will be fetched as dependency during build

### How to run

Build script will create a disk image with compiled demo inside, which needs to be attached to some emulator. 
I used Basilisk II with Qadra 600 ROM:

https://basilisk.cebix.net/
