#include <stdio.h>

int main()
{
    int a, b, max;
    printf("Please enter two integer: ");
    scanf("%d%d", &a, &b);
    if (a >= b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    printf("The maxinum is %d.\n", max);
    return 0;
}