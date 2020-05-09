#include <stdio.h>

int main()
{
    int max, min;
    printf("MAX = ");
    scanf("%d", &max);
    printf("MIN = ");
    scanf("%d", &min);
    for (int i = max; i >= min; --i)
    {
        if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}