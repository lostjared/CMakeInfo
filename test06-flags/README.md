
First create and enter the build directory:

	$ mkdir build && cd build

To build using a shared library use:

	$ cmake ../ -DBUILD_SHARED_LIBS=ON -DUSE_LIBS=ON
	$ make

To build using a static library use:

	$ cmake ../ -DBUILD_SHARED_LIBS=OFF -DUSE_LIBS=ON
	$ make

To build without using a library use:

	$ cmake ../ -DUSE_LIBS=OFF
	$ make 




