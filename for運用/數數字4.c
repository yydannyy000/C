#include <stdio.h>

int main()
{
    int count;
    printf("Please enter the number: ");
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        int number = count + 1 - i;
        printf("%d\n", number);
    }
    return 0;
}