#include <stdio.h>

int main()
{
    int count = 0;
    int number;
    int n;
    printf("number = ");
    scanf("%d%d", &number,&n);
    for (int i = 1; i <= number && count < n; ++i)
    {
        if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
        {
            ++count;
            if (count == n)
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}