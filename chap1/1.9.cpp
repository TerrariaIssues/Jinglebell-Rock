#include <iostream>
int main()
{
    int var1 = 50, sum = 0;
    while(var1 <= 100)
    {
        sum += var1;
        var1++;
    }
    std::cout << sum <<" is the final sum" << std::endl;
    return 0;
}