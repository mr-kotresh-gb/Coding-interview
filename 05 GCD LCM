// Find GCD and LCM of given two numbers.

#include<stdio.h>
int main()
{
    int i, n1, n2, gcd, lcm, min;
    scanf("%d%d", &n1, &n2);
    min = (n1 < n2) ? n1 : n2;
    for(i = 1; i <= min; i++)
    {
        if(n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }
    lcm = (n1 * n2) / gcd;
    printf("GCD = %d\nLCM = %d", gcd, lcm);
    return 0;
}
