#include <iostream>
#include "math.hpp"
int main(){
    math::number n{20};
    std::cout << !n << "\n";
    std::cout << math::cubed(10);
};