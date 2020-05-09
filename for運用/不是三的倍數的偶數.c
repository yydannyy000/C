#include <stdio.h>

int main()
{
    int count;
    printf("Please enter the number: ");
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        if (i % 2 == 0 && i % 3 != 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}