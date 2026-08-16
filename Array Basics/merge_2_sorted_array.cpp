#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout << "enter the size of the first array : ";
  cin >> n;
  int arr[n];
  cout << "enter the elements of the first array : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int m;
  cout << "enter the size of the second array : ";
  cin >> m;
  int brr[m];
  cout << "enter the elements of the second array : ";
  for (int i = 0; i < m; i++)
  {
    cin >> brr[i];
  }

  int k=n+m;
  int crr[k];

 for (int i=0;i<n;i++){
  crr[i]=arr[i];
 }
 for(int i=0;i<m;i++)
 {

  crr[n+i]=brr[i];
 }


 cout<<"\n";
 for(int i=0;i<m+n;i++)
 {
    cout<<crr[i]<<" ";
 }


 sort(crr,crr+k);

 cout<<"\n";
 for(int i=0;i<m+n;i++)
 {
    cout<<crr[i]<<" ";
 }

}