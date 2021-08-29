// 1. You are given an array(arr) of integers.
// 2. You have to sort the given array in increasing order using radix sort.

#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void print(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int getMax(int arr[], int n)
{
    int m = arr[0];
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i] > m)
        {
            m = arr[i];
        }
    }
    return m;
}

void countSort(int arr[], int exp, int n) {
  // write code here
  int m = getMax(arr, n);
  int output[n];
  int count[m];
  for (int i = 0; i <= m ; i++)
  {
    count[i] = 0;
  }
  for (int i = 0; i < n ; i ++)
  {
    count[(arr[i] / exp) % 10]++;
  }
  for (int i = 1; i <= m ; i++)
  {
    count[i] += count[i - 1];
  }
  for (int i = n - 1; i >= 0 ; i--)
  {
    output[count[(arr[i] / exp) % 10] - 1] = arr[i];
    count[(arr[i] / exp) % 10]--;
  }
  for (int i = 0 ; i < n ; i++)
  {
    arr[i] = output[i];
  }
  cout << "After sorting on " << exp << " place -> ";
  print(arr,n);
}
void radixSort(int arr[] ,int n) {
  // write code here
  int m = getMax(arr, n);
  for (int place = 1; m / place > 0; place *= 10)
  {
    countSort(arr, place, n);
  }
  
}

int main()  {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i] ;
  }
  radixSort(arr, n);
  print(arr, n);

}
