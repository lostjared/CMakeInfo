#include"hello.hpp"

int main(int argc, char **argv) {
    std::string value;
    CatString(value, "Hello, ", "World", "!");
    print_string(value);
    return 0;
}
