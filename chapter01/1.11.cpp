#include <iostream>

int main()
{
    int first = 0, last = 0;
    std::cout << "Enter the first and last numbers: " << std::endl;
    std::cin >> first >> last;

    while (first <= last)
    {
        std::cout << first++ << std::endl;
    }

    return 0;
}
