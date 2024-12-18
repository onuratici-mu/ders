#include <stdio.h>

int factorialWhile(int number);

int main()
{
    int factorial_5 = factorialWhile(5);
    printf("Factorial %d", factorial_5);


    return 0;   
}

int factorialWhile(int number)
{
    if(number < 0)
    {
        return 0;
    }
    if (number == 0)
    {
        return 1;
    }
    int result = 1;
    if (number > 0)
    {
        while(number > 0)
        {
            result = result*number;
            number--;
        }
    }
    return result;
}