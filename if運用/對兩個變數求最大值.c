#include <stdio.h>

int main()
{
    int a, b, max;
    printf("Please enter two integer: ");
    scanf("%d%d", &a, &b);
    max = a;
    if (max < b)
    {
        max = b;
    }
    printf("The maxinum is %d.\n", max);
    return 0;
}