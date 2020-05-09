#include <stdio.h>

int main()
{
    int count = 0;
    int number;
    printf("Please enter the number: ");
    scanf("%d", &number);
    for (int i = number; i > count; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}