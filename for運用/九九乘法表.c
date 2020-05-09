#include <stdio.h>

int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            printf("%d * %d = %2d\t", i, j, i * j);
            if (j % 3 == 0)
            {
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}