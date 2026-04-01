#include <iostream>

int fibonacci(int num);

int main()
{
    for(int i = 0; i < 10; i++)
    {
        std::cout << fibonacci(i) << " ";
    }

    std::cout << '\n';

    return 0;
}

int fibonacci(int num)
{
    if(num == 0 || num == 1)   
    {
        return num;
    }
    else 
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }

    return 1;
}