#include <iostream>

int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    int a = 0, b = 0;
    std::cin >> a >> b;

    std::cout << "The sum of " << a << std::endl;
    std::cout << "and " << b << std::endl;
    std::cout << "is equal to " << a + b << std::endl;

    return 0;
}
