// 1. You are given an array(arr) containing only 0's and 1's.
// 2. You have to sort the given array in increasing order and in linear time.

#include<iostream>
using namespace std;

// used for swapping ith and jth elements of array
void swap(int arr[], int i, int j) {
  cout << "Swapping index " << i << " and index " << j << "\n";
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void sort01(int arr[], int n) {
  //write your code here
  int i = 0, j = 0;
  while (i < n)
  {
    if (arr[i] == 0)
    {
      swap(arr, i, j);
      i++;
      j++;
    }
    else
    {
      i++;
    }
  }
}
void print(int arr[], int n) {
  for (int i = 0 ; i < n; i++) {
    cout << arr[i] << "\n";
  }
}
int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0 ; i < n; i++) {
    cin >> arr[i];
  }
  sort01(arr, n);
  print(arr, n);
}

