
First to build this project create a directory and enter that directory

    $ mkdir build && cd build
    
If you wish to compile in debug mode use:

    $ cmake .. -DCMAKE_BUILD_TYPE="Debug"

Then build the project with:

    $ make -j4
    
If you wish to see the flags used:

    $ cmake --build . -- VERBOSE=1
    
To compile in Release mode use:

    $ cmake .. -DCMAKE_BUILD_TYPE="Release"
    $ make -j4

Library On/Off and Static or Shared use

USE_LIBS=ON or USE_LIBS=OFF

or if USE_LIBS is ON

if USE_LIBS is ON then BUILD_SHARED_LIBS=ON or BUILD_SHARED_LIBS=OFF


