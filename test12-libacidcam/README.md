
To build enter directory and

	$ mkdir build && cd build

Then configure the project

	$ cmake .. -DBUILD_SHARED_LIBS=YES -DCMAKE_BUILD_TYPE="Release"

	$ make -j4

after it completes

	$ sudo make install


