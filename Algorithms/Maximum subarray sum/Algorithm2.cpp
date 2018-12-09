#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the length of the array\n";
  cin>>n;
  int A[n];
  for(int i=0;i<n;i++)
    cin>>A[i];
  //Calculating every subarray and simply finding best
  int best=0;
  int tempsum=0;
  for(int i=0;i<n;i++)
  {
    tempsum=0;//reset here
    for(int j=i;j<n;j++)
    {
      tempsum+=A[j];//this inevitably sums each subarray separately
      best=max(tempsum,best);
    }
  }
  cout<<"\nMax sum=" <<best;
  //Time complexity has been reduced to O(n^2)
}
