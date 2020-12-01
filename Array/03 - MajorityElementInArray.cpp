/*
Find Majority Element in an Array

Given an array of size n, find the element which occurs more than n/2 times.
This element is called Majority Element.

Algorithem:-
Boyer-Moore Vote Algorithm
Step 1: Find a candidate for majority element.
Step 2: Check if this candidate is a majority element.
Step1:
Find the candidate for majority element
1: Initialize count of current candidate as 0, count = 0
2: Iterate over the array and do following steps:
   (a) If count == 0, set candidate = array[i], count = 1
   (b) Else   
       (i) If candidate == array[i], set count = count + 1
       (ii) else set count = count - 1
Step 2: 
Check if candidate is Majority Element
1: If count == 0, there is no majority element.
2: Else, iterate over array to get count of candidate.
    (a) If count is greater than n/2, return candidate
    (b) Else return null;
*/

#include<iostream>
using namespace std;
int main()
{
    int n, count = 0, candidate = NULL;
    cin >> n;
    int A[n];
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(count == 0)
        {
            candidate = A[i];
            count = 1;
            continue;
        }
        else{
            if(candidate == A[i])
            {
                count++;
            }
            else
            {
                count--;
            }   
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(candidate == A[i])
            count++;   
    }
    if(count > (n / 2))
    {
        cout << candidate;
    }
    else cout << "No any majority element found!!!";
}
