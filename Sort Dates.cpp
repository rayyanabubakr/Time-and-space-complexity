// 1. You are given an array(arr) of different dates in format DD-MM-YYYY.
// 2. You have to sort these dates in increasing order.

#include <iostream>
#include<stdio.h>
#include <vector>
#include <iomanip>
using namespace std;

void countSort(vector<int>& arr, int div, int mod, int range) {
  //write your code here
  int output[arr.size()];
  int count[range];

  for (int i = 0; i <= range ; i++)
  {
    count[i] = 0;
  }

  for (int i = 0; i < arr.size(); i++)
  {
    count[(arr[i] / div) % mod ]++;
  }


  for (int i = 1; i <= range; i++)
  {
    count[i] += count[i - 1];
  }

  for (int i = arr.size() - 1; i >= 0; i--)
  {
    output[count[(arr[i] / div) % mod] - 1] = arr[i];
    count[(arr[i] / div) % mod]--;
  }
  for (int i = 0; i < arr.size(); i++)
  {
    arr[i] = output[i];
  }
}

void input(vector<int>& arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cin >> arr[i];
  }
}

void print(vector<int>& arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << setfill('0') << std::setw(8) << arr[i] << "\n";
  }
  cout << endl;
}

void sort01(vector<int>& arr)
{
  countSort(arr, 1000000, 100, 32);
  countSort(arr, 10000, 100, 13);
  countSort(arr, 1, 10000, 2501);
}

int main()
{
  int n, m;
  cin >> n;
  vector<int> A(n, 0);
  input(A);

  sort01(A);
  print(A);
  return 0;
}
