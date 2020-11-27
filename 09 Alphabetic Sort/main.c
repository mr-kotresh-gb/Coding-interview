//Program to sort a string in alphabetical order

#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, temp, n;
    char S[50];
    printf("Enter any string: ");
    gets(S);
    n = strlen(S);
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(S[i] > S[j])
            {
                temp = S[i];
                S[i] = S[j];
                S[j] = temp;
            }
        }
    }
    printf("The new string is: %s",S);
    return 0;
}
