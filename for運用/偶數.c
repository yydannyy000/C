#include <stdio.h>

int main()
{
    int count;
    printf("Please enter the number: ");
    scanf("%d", &count);
    for (int i = 2; i <= count; i += 2)
    {
        printf("%d\n", i);
    }
    return 0;
}