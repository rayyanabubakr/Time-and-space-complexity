// 1. You are given an array(arr) of integers.
// 2. You have to sort the given array in increasing order using quick-sort.

#include<iostream>
using namespace std;

// used for swapping ith and jth elements of array
void swap(int arr[], int i, int j) {
  cout << "Swapping " << arr[i] << " and " << arr[j] << '\n';
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

int partition(int arr[], int pivot, int lo, int hi) {
  cout << "pivot -> " << pivot << "\n";
  int i = lo, j = lo;
  while (i <= hi) {
    if (arr[i] <= pivot) {
      swap(arr, i, j);
      i++;
      j++;
    } else {
      i++;
    }
  }
  cout << "pivot index -> " << (j - 1) << "\n";
  return (j - 1);
}

void print(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

void quickSort(int arr[], int lo, int hi) {
  //write your code here
  if(lo > hi)
  {
      return;
  }
  int pivot = arr[hi];
  int pi = partition(arr, pivot, lo, hi);
  quickSort(arr, lo, pi - 1);
  quickSort(arr, pi + 1, hi);

}

int main()
{

  int n ;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i] ;
  }
  quickSort(arr, 0, n - 1);
  print(arr, n);
}

