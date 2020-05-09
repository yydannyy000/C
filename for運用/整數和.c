#include <stdio.h>

int main()
{
    int sum = 0;
    int count;
    printf("Please enter the number: ");
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}