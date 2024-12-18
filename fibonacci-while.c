#include <stdio.h>

int main()
{
    int first = 0, second = 1, i = 0, next;
    int n = 1;

    while(i<n)
    {
        if(i==0)
        {
            next = 0;
        }
        else if(i==1)
        {
            next = 1;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        i=i+1;
    }
    printf("%d", next);
    return 0;
}