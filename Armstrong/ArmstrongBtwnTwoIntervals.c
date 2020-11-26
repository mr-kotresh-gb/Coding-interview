// C program to print the Armstrong numbers between the two intervals

//  Algorithm to print Armstrong numbers between two intervals
//1. Input the start and end values.
//2. Repeat from i = start_value to end_value.
//3. Repeat until (temp != 0)
//4. remainder = temp % 10
//5. result = result + pow(remainder,n)
//6. temp = temp/10
//7. if (result == number)
//8. Print the number
//9. Repeat steps from 2 to 8 until the end_value is encountered.

#include <stdio.h>
#include <math.h>

int main()
{
    int start, end, i, temp1, temp2, remainder, n = 0, result = 0;

    printf("Enter start value and end value : ");
    scanf("%d %d", &start, &end);
    printf("\nArmstrong numbers between %d an %d are: ", start, end);

    for(i = start + 1; i < end; ++i)
    {
        temp2 = i;
        temp1 = i;
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }

        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }

        if (result == i) {
        printf("%d ", i);
        }

        n = 0;
        result = 0;
    }
    printf("\n");
    return 0;
}
