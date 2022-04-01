#include <iostream>

int recursiveFunction(int Fib, int i, int a, int b, int c)
{

    if (i < Fib)
    {
        c = b;
        b = a + b;
        a = c;
        std::cout << b << " " << std::endl;
        i++;
        recursiveFunction(Fib, i, a, b, c);
    }
    return i;
}