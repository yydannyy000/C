#include <stdio.h>

int main()
{
    int n, m;
    printf("n , m = ");
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n / 2; i++)
    {
        int j = n - i;
        if (i * j == m)
        {
            printf("%d, %d\n", i, j);
        }
    }
    return 0;
}