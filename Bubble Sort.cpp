// 1. You are given an array(arr) of integers.
// 2. You have to sort the given array in increasing order using bubble sort.
  
#include<iostream>
using namespace std;


// used for swapping ith and jth elements of array
void swap1(int arr[], int i, int j) {
  cout << "Swapping " << arr[i] << " and " << arr[j] <<"\n";
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

// return true if ith element is smaller than jth element
bool isSmaller(int arr[], int i, int j) 
{
  cout << "Comparing " << arr[i] << " and " << arr[j] <<"\n";
  if (arr[i] < arr[j]) {
    return true;
  } else {
    return false;
  }
}

void print(int arr[],int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i]<<"\n";
  }
}
void bubbleSort(int arr[], int n) {
  //write your code here
  int i,j,m;
  m=n;
  for(int k=0; k < m-1; k++)
  {
      
  for (j = 0, i= j + 1; j < n- 1 , i < n ; i++, j++)
  {
      if (isSmaller(arr, i, j))
      {
        swap1(arr, i, j);
      }
      
  }
  n--;
  }
}



int main() {

  int n;
  cin >> n;
  int arr [n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  bubbleSort(arr,n);
  print(arr,n);
}

