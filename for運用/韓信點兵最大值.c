#include <stdio.h>

int main()
{
    int max;
    printf("MAX = ");
    scanf("%d", &max);
    int answer = 0;
    for (int i = max; i >= 1 && answer == 0; --i)
    {
        if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
        {
            answer = i;
        }
    }
    if (answer != 0)
    {
        printf("%d\n", answer);
    }
    return 0;
}