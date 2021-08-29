#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book, booksum;
    while (std::cin >> book)
    {
        booksum += book;
    }
    std::cout << booksum << std::endl;
    return 0;
}