#include <iostream>

int main() {
    int a = 1;
    int b = 2;

    int c = a;
    a = b;
    b = c;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    return 0;
}
