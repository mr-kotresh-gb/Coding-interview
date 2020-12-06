#include<iostream>
using namespace std;
int main()
{
    int n, mid, num;
    cout << "Enter number of elements: ";
    cin >> n;
    int A[n];
    cout << "Enter the elements of array in order: "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Enter number: ";
    cin >> num;
    int end = A[n-1], start = 0;
    while(start <= end)
    {
        mid = (start + end) / 2;
        if(A[mid] == num)
        {  cout << "Element found"; break; }
        else if(num < A[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return 0;
}
