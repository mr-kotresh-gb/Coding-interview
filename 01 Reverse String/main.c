#include<stdio.h>

void reverse(char *a)
{
    if(*a)    // Till the end of string
    {
        reverse(a+1);
        printf("%c",*a);
    }
}

int main()
{
    char a[100];
    scanf("%[^\n]s",a);    // %[^\n]s --> is used to scan entire string including "space"
    reverse(a);
    return 0;
}
