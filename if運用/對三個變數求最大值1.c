#include <stdio.h>

int main()
{
    int a, b, c, max;
    printf("Please enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b && a >= c)
    {
        max = a;
    }
    else if (b >= a && b >= c)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    printf("The maxinum is %d.\n", max);
    return 0;
}