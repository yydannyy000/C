#include <stdio.h>

int main()
{
    int count;
    int number;
    printf("Please enter the number: ");
    scanf("%d", &count);
    printf("Please enter the number: ");
    scanf("%d", &number);
    while (count <= number)
    {
        printf("%d\n", count);
        count = count + 1;
    }
    return 0;
}