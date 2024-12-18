#include <stdio.h>

int fibonacciFor(int number);

int main()
{
    int fibonacci_5 = fibonacciFor(7);
    printf("Fibonacci %d", fibonacci_5);

    return 0;
}

int fibonacciFor(int number)
{
    int first = 1, second = 1, result = 0;
    if (number == 1 || number == 2)
    {
        return 1;
    }
    for(int i = 2; i < number; i++)
    {
        result = first + second;
        first = second;
        second = result;
    }
    return result;
}