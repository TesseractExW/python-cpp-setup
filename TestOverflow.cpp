#include <iostream>
#include <limits>

int main() {
    int number = std::numeric_limits<int>::max();
    std::cout << number + 1;
    return 0;
}