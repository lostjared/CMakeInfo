
#include"test_func.hpp"

int main() {
    std::vector<int> value {5, 5, 10};
    if(Subtract(100, value) == 80) {
        std::cout << " 100 - 5 - 5 - 10 = 75\n";
        return 0;
    }
    else
        return 1;
    
    return 0;
}
