#include <iostream>
int recursiveFunction(int Fib, int i, int a, int b, int c);

int main()

{
    // printer("Hello World");;
    int Fib = 0, a = 0, b = 1, c = 0, i = 0;

    std::cout << "How far would you like to fibonacci? " << std::endl;
    std::cin >> Fib;
    Fib = Fib - 2;
    system("clear");
    std::cout << a << " " << std::endl;
    std::cout << b << " " << std::endl;
    recursiveFunction(Fib, i, a, b, c);

    return 0;
}

/*
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
*/

// input int
// gives fib sequence
// using recursion