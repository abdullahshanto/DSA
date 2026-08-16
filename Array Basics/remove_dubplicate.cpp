#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout << "enter the size of the array : ";
  cin >> n;
  int arr[n];
  cout << "enter the elements of the array : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "elements are : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
  int brr[n];
  int k = 0;
  for (int i = 0; i < n; i++)
  {
    bool isDuplicate = false;
    for (int j = 0; j < k; j++)
    {
      if (arr[i] == brr[j])
      {
        isDuplicate = true;
        break;
      }
    }
    if (!isDuplicate)
    {
      brr[k] = arr[i];
      k++;
    }
  }
  cout << "array after removing duplicates : ";
  for (int i = 0; i < k; i++)
  {
    cout << brr[i] << " ";
  }
  cout << "\n";
}