// C program to check whether a number can be expressed as a sum of two prime numbers

#include <stdio.h>
int sum_of_two_primes(int n);

int main()
{
    int n, i;
    int flag = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(i = 2; i <= n/2; ++i)
    {
        // Condition for i to be prime
        if (sum_of_two_primes(i) == 1)
        {
            if (sum_of_two_primes(n-i) == 1)
            {
                printf("\n%d can be expressed as the sum of %d and %d\n\n", n, i, n - i);
                flag = 1;
            }
         }
     }

    if (flag == 0)
    printf("%d cannot be expressed as the sum of two prime numbers\n", n);
    return 0;
}

//function to check if a number is prime or not
int sum_of_two_primes(int n)
{
    int i, isPrime = 1;
    for(i = 2; i <= n/2; ++i)
    {
        if(n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}
