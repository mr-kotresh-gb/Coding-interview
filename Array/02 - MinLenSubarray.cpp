/*
Find Minimum Length Sub Array With Sum K

Given an array A having positive and negative integers and a number k,
find the minimum length sub array of A with sum = k.


Algorithm :-
1. Iterate over the array using 2 loops.
2. Initialize currentSum = 0, min = MAX_VALUE
3. Starting from array[i], keep adding array[i] to currentSum till currentSum != k or till last element of the array or size of current subarray becomes > min.
4. If currentSum == k update min.
5. Also keep track of start and end index of the min subarray obtained so far.
6. Print array elements from start to end.

*/


#include<iostream>
using namespace std;
int main()
{
    int A[]={2, 3, 1, 1, -1, 6, 4, 3, 8};
    int n = 9, k = 7, cur_sum, min, start = -1, end = -1;

    for(int i = 0; i < n; i++)
    {
        cur_sum = 0;
        for(int j = i; j < n && (j - i + 1) < min; j++)
        /* (j - i + 1) < min -> Is added to stop traversing further in the array when length of current subarray
        becomes more than the minimum length found till now */
        {
            cur_sum += A[j];
            if(cur_sum == k)
            {
                start = i;
                end = j;
                min = end - start + 1;
                break;
            }
        }
    }

    if(start == -1 || end == -1)
    {
        cout << "No sun array exist";
    }

    cout<<"[ ";
    while(start <= end){
        cout << A[start] <<" ";
        start++;
    }
    cout<<"]";

    return 0;
}
