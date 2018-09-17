#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, sumItem;

    if (std::cin >> sumItem)
    {
        while (std::cin >> item)
        {
            if (sumItem.isbn() == item.isbn())
            {
                sumItem += item;
            }

            else
            {
                std::cout << sumItem << std::endl;
                sumItem = item;
            }
        }

        std::cout << sumItem << std::endl;
    }

    else
    {
        return -1;
    }

    return 0;
}
