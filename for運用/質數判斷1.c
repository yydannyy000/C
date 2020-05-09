#include <stdio.h>

int main()
{
    int count;
    printf("Please enter the number: ");
    scanf("%d", &count);
    int isPrime = 1;
    for (int i = 2; i < count && isPrime; ++i)
    {
        if (count % i == 0)
        {
            isPrime = 0;
        }
    }
    if (isPrime)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}