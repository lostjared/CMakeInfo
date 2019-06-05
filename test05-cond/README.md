New test to compile the files as object files and link to the main program just use

	$ mkdir build && cd build
	$ cmake ../ -D USE_LIB=OFF
	$ make

Or compile libraries to shared library

	$ mkdir build && cd build
	$ make ../ -D USE_LIB=ON
	$ make



