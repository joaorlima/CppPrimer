#include <iostream>

int main()
{
    int first = 0, last = 0;

    std::cout << "Enter first and last number: ";
    std::cin >> first >> last;

    while (first <= last)
    {
        std::cout << first++ << std::endl;
    }

    std::cout << std::endl;

    return 0;
}
