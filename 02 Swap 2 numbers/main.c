#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d%d",&x,&y);
    printf("Before swapping: x = %d, y = %d\n",x,y);   // x = 2, y = 2
    // ^ - Exclusive OR
    x = x ^ y;  // x = 7(111) ^ 2(010) == 5(101)
    y = x ^ y;  // x = 5(101) ^ 2(010) == 7(111)
    x = x ^ y;  // x = 5(101) ^ 7(111) == 2(010)
    // By XORing the binary values we can swap two numbers.
    printf("After swapping: x = %d, y = %d",x,y);
}

// We can also solve this by:
// x = (x + y) - (y = x)
