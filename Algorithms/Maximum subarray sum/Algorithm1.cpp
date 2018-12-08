//subarray has consecutive elemects only
//slowest algorithm of time complexity O(n^3)
#include<bits/stdc++.h>
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
    for(int j=i;j<n;j++)//iterates every subarray starting with i
    {
      tempsum=0;
      for(int k=i;k<j;k++)
      {
        tempsum+=A[k];
      }
      best=max(tempsum,best);
    }
  }
  cout<<"\nMax sum=" <<best;
}
