// 1. You are given an array(arr) of distinct integers and a target.
// 2. You have to print all the pairs having their sum equal to the target.

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void targetSum(int arr[], int target, int n)
{
    int l = 0, r = n - 1;
    sort(arr, arr + n);
    while(l < r)
    {
        if(arr[l] + arr[r] > target)
        {
            r--;
        }
        else if(arr[l] + arr[r] < target)
        {
            l++;
        }
        else
        {
            cout << arr[l] << ", " << arr[r] <<"\n";
            l++;
            r--;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    
    targetSum(arr, target, n);
    
}
