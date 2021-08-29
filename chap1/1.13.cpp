#include <iostream>

int main()
{
    int sum;
    for (int i = 50; i <= 100; i++)
    {
        sum += i;
    }
    std::cout << sum <<" is the sum." << std::endl;
    return 0;
}