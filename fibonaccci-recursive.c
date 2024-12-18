#include <stdio.h>

int fibonacciRecursive(int number);

int main()
{
    int num;
    while (1)
    {
        printf("Please enter a number: ");
        scanf("%d", &num);
        int fibonacci_5 = fibonacciRecursive(num);
        printf("Fibonacci %d\n", fibonacci_5);
        if (num == "")
        {
            break;
        }
    }
    return 0;
}

int fibonacciRecursive(int number)
{
    if(number == 1 || number == 2)
    {
        return 1;
    }
    return fibonacciRecursive(number - 1) + fibonacciRecursive(number - 2);
}
