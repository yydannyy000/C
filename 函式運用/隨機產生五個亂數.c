#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", rand());
    }
    return 0;
}
