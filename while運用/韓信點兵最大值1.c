#include <stdio.h>

int main()
{
    int max;
    printf("MAX = ");
    scanf("%d", &max);
    int number = max;
    while (!(number % 3 == 2 && number % 5 == 3 && number % 7 == 2))
    {
        --number;
    }
    printf("%d\n", number);
    return 0;
}