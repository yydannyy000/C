#include <stdio.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 1; i <= n - 2; i++)
    {
        printf("*");
        for (int j = 1; j <= n - 2; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for (int j = 1; j <= n; j++)
    {
        printf("*");
    }
    printf("\n");
    return 0;
}