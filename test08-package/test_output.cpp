#include "test_output.hpp"

void checkDevice() {
    cv::VideoCapture vid(0);
    if(vid.isOpened()) {
        std::cout << "Accessed Device.\n";
        exit(0);
    } else {
        std::cout << "Could not access device.\n";
        exit(0);
    }
}
