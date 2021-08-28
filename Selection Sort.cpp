#include<iostream>
using namespace std;


// used for swapping ith and jth elements of array
void swap(int arr[], int i, int j) {
  cout << "Swapping " << arr[i] << " and " << arr[j]<<"\n";
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

// return true if ith element is smaller than jth element
bool isSmaller(int arr[], int i, int j) {
  cout << "Comparing " << arr[i] << " and " << arr[j]<<"\n";
  if (arr[i] < arr[j]) {
    return true;
  } else {
    return false;
  }
}

void print(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << '\n';
  }
}

void selectionSort(int arr[], int n) {
  //write your code here
  int i, j, m;
  for (i = 0 ; i < n - 1 ; i++)
  {
    m = i;
    for (j = i + 1 ; j < n; j++)
    {
      if (isSmaller(arr, j, m))
      {
        m = j;
      }
    }
    swap(arr, i, m);
  }

}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  selectionSort(arr, n);
  print(arr, n);
}

