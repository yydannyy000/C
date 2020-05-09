#include <stdio.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("*\n");
    for (int i = 0; i <= n - 3; i++)
    {
        printf("*");
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for (int j = 1; j <= n - 1; j++)
    {
        printf("*");
    }
    printf("*\n");
    return 0;
}