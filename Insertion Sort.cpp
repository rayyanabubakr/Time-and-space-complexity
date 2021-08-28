// 1. You are given an array(arr) of integers.
// 2. You have to sort the given array in increasing order using insertion sort.

#include<iostream>
using namespace std;


// used for swapping ith and jth elements of array
void swap(int arr[], int i, int j) {
  cout << "Swapping " << arr[i] << " and " << arr[j] << "\n";
       int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

// return true if ith element is smaller than jth element
bool isSmaller(int arr[], int i, int j) {
  cout << "Comparing " << arr[i] << " and " << arr[j] << "\n";
  if (arr[i] < arr[j]) {
    return true;
  } else {
    return false;
  }
}

void print(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] <<'\n';
  }
}

void insertionSort(int arr[], int n) {
  //write your code here
  for(int i = 1; i < n; i++){
      for(int j = i - 1; j >= 0; j--){
        if(isSmaller(arr, j + 1, j )){
            swap(arr, j , j + 1);
        }else{
          break;
        }
      }
    }
}


int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  insertionSort(arr, n);
  print(arr, n);
}
