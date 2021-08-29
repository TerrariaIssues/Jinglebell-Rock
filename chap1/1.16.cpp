#include <iostream>
int main()
{
    int var = 0, sum = 0;
    while (std::cin >> var)
    {
        sum += var;
    }
    std::cout << " sum: " << sum <<std::endl;
    return 0;
}