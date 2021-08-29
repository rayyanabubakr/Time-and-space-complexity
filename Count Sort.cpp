// 1. You are given an array(arr) of integers.
// 2. You have to sort the given array in increasing order using count sort.

#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
#include<math.h>
using namespace std;

void countSort(int arr[], int min, int max, int n) {
  //write your code here
  int output[n];
  int count[max - min + 1];

  memset(count, 0, sizeof(count));
  for (int i = 0; i < n; i++)
  {
    count[arr[i]- min]++;
  }

  for (int i = 1; i <= max - min + 1; i++)
  {
    count[i] += count[i - 1];
  }

  for (int i = n - 1; i >= 0; i--)
  {
    output[count[arr[i] - min] - 1] = arr[i];
    count[arr[i] - min]--;
  }
  for (int i = 0; i < n; i++)
  {
    arr[i] = output[i];
  }
}

void print(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << "\n";
  }
}

int main()
{

  int n ;
  cin >> n;
  int arr[n];
  int maxi = INT_MIN;
  int mini = INT_MAX;
  for (int i = 0; i < n; i++) {
    cin >> arr[i] ;
    if(arr[i] > maxi)
    {
        maxi = arr[i];
    }
    if(arr[i] < mini)
    {
        mini = arr[i];
    }
  }
  countSort(arr, mini, maxi, n);
  print(arr, n);
}
