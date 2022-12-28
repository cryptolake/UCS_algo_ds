#include <iostream>

int main(void)
{
    int in, sum=0;

    for (int i=1; i<=2; i++)
    {
        std::cin >> in;
        sum += in;
    }
    std::cout << sum;
    return 0;
}
