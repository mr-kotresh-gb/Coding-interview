/*
Given an array of size n, find a peak element in the array.

Peak element is the element which is greater than or equal to its neighbors.
For example - In Array {1,4,3,6,7,5}, 4 and 7 are peak elements.

Algorithm/Insights ->
Linear approach:
One way to solve this problem is to iterate over the array and find an element that is
greater than or equal to its neighbors and return it.
Time Complexity: O(n)

Efficient approach:
1. Initialize start = 0, end = array.length - 1
2. Repeat following steps till peak element is found:
   a). Find mid = (start+end)/2
   b). If array[mid] is peak element, return array[mid]
   c). Else if array[mid-1] > array[mid], find peak in left half of array
       set end = mid - 1
   d). Else find peak in right half of array
       set start = mid + 1
Time Complexity: O(log n)
*/

#include<iostream>
using namespace std;
int main()
{
    int start, end, mid, n;
    cin >> n;
    int A[n];
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    start = 0;
    end = n - 1;
    while(start <= end)
    {
        mid = (start + end) / 2;
        if((mid == 0 || A[mid - 1] <= A[mid]) && (mid == n - 1 || A[mid] >= A[mid + 1]))
            cout << "Peak value is " << A[mid];
        if(mid > 0 && A[mid - 1] > A[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return 0;
}
