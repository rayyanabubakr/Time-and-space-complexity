// 1. You are given an array(arr) of integers.
// 2. You have to find the k-th smallest element in the given array using the quick-select algorithm.

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

int quickSelect(int arr[], int lo, int hi, int k) {

    //write your code here
    int pivot = arr[hi];
    int pi = partition(arr, pivot, lo, hi);

    if (k > pi)
    {
      return quickSelect(arr, pi + 1, hi, k);
    }
    else if (k < pi)
    {
      return quickSelect(arr, lo, pi - 1, k);
    }
    else
    {
      return pivot;
    }

  }

  int main()
  {

    int n ;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i] ;
    }
    int k;
    cin >> k;
    cout << (quickSelect(arr, 0, n - 1, k - 1));
   
  }
