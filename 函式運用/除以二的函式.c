#include <stdio.h>

double div2(double);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%f\n", div2(n));
    return 0;
}

double div2(double x)
{
    return x / 2;
}
