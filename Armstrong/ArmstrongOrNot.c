//Check whether the number is armstrong or not!

//A number is an Armstrong number when the sum of nth power of each digit is equal to the number itself.

//   Algorithm
//1. Input the number.
//2. Initialize sum=0 and temp=number.
//3. Find the total number of digits in the number.
//4. Repeat until (temp != 0)
//5. remainder = temp % 10
//6. result = resut + pow(remainder,n)
//7. temp = temp/10
//8. if (result == number)
//9. Display "Armstrong"
//10. Else
//11. Display "Not Armstrong"

#include<stdio.h>
#include<math.h>
int main()
{
    int num, temp, n, r, res;
    n = 0; r = 0; res = 0;
    scanf("%d",&num);
    temp = num;
    while(temp != 0)
    {
        temp /= 10;
        ++n;
    }
    //printf("%d",n);
    temp = num;
    while(temp != 0)
    {
        r = temp % 10;
        res += pow(r, n);
        temp /= 10;
    }
    if(res == num)
    {    printf("It is an Armstrong number!"); }
    else
    {    printf("It is not an Armstrong number!"); }
    return 0;
}
