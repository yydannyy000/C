#include <stdio.h>

void print_stars(int i);
void print_triangle(int n);

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    print_triangle(n);
    return 0;
}

void print_triangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        print_stars(i);
        printf("\n");
    }
}

void print_stars(int i)
{
    for (int j = 1; j <= i; j++)
    {
        printf("*");
    }
}