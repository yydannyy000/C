#include <stdio.h>

int main()
{
    int count;
    printf("Please enter the number: ");
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        int number = i * 2;
        if (i % 3 != 0)
        {
            printf("%d\n", number);
        }
    }
    return 0;
}