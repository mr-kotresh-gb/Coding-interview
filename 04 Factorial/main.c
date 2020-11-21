// Factorial of a number

#include<stdio.h>

int fact(int n)
{
    return (n == 1 || n == 0) ? 1 : n * fact(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fact(n));
    return 0;
}
