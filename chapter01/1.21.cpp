#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item firstItem, secondItem;
  std::cin >> firstItem >> secondItem;

  if (firstItem.isbn() == secondItem.isbn())
  {
      std::cout << firstItem + secondItem << std::endl;
  }

  else
  {
      std::cout << "ISBN is different." << std::endl;
  }
  
  return 0;
}
