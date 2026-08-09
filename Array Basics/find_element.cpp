/* Input: i = 2 , arr[] = [10, 20, 30, 40, 50]
Output: 30
Explanation: The value of arr[2] is 30 .*/

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

  cout << "which index of element you want to find? : ";
  int idx;
  cin >> idx;
  for (int i = 0; i < n; i++)
  {
    if (i == idx)
    {
      cout << "element at index " << idx << " is : " << arr[i];
    }
  }
}