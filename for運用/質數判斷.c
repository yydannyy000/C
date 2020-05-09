#include <stdio.h>

int main()
{
    int n;
    printf("Please enter the n: ");
    scanf("%d", &n);
    int number;
    for (number = 2; number < n && n % number != 0; ++number)
        ;
    if (number == n)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}