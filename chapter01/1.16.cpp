#include <iostream>

int main()
{
    int first, last;
    int sum = 0;

    std::cout << "Enter first number: ";
    std::cin >> first;

    std::cout << "Enter last number: ";
    std::cin >> last;

    for (int i = first; i <= last; i++)
    {
        sum += i;
    }

    std::cout << "The sum of from " << first << " to " << last
              << " is " << sum << std::endl;

    return 0;
}
