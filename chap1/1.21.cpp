#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book, book2;

    std::cin >> book >> book2;
    std::cout << book + book2 <<std::endl;
    return 0;
}