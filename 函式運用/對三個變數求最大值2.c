#include <stdio.h>

int max2(int, int);
int max3(int, int, int);

int main()
{
    int a, b, c;
    printf("Please enter three integer: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("The maxinum is %d.\n", max3(a, b, c));
    return 0;
}

int max3(int a, int b, int c)
{
    return max2(max2(a, b), c);
}

int max2(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}