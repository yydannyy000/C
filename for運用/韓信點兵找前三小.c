#include <stdio.h>

int main()
{
    int count = 0;
    int number;
    printf("number = ");
    scanf("%d", &number);
    for (int i = 1; i <= number && count < 3; ++i)
    {
        if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
        {
            ++count;
            if (count <= 3)
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}