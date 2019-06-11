#include "test_func.hpp"

int Subtract(int num_value, std::vector<int> &value) {
    if(num_value == 0)
        return 0;
    for(int i = 0; i < value.size(); i++) {
        num_value -= value[i];
    }
    return num_value;
}

