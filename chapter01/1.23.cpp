#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item , thisItem;

    if (std::cin >> thisItem)
    {
        int count = 1;

        while (std::cin >> item)
        {
            if (item.isbn() == thisItem.isbn())
            {
                count++;
            }

            else
            {
                std::cout << thisItem << " occurs " << count
                          << " time(s)." << std::endl;

                thisItem = item;
                count = 1;
            }
        }

        std::cout << thisItem << " occurs " << count << " time(s)." << std::endl;
    }

    return 0;
}















// currItem = thisItem
// valItem = item
