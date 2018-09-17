#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item;

    for (item; std::cin >> item; std::cout << item << std::endl);

    return 0;
}
