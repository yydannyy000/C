#include <stdio.h>

int main()
{
    int count;
    printf("Please enter the number: ");
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        if (count % i == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}