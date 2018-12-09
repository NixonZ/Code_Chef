//Kadane algorithm time complexity O(n)
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
  int best=0;
  int tempsum=0;
  for(int i=0;i<n;i++)
  {
    tempsum=max(tempsum+A[i],A[i]);
    best=max(best,tempsum);
  }
  cout<<"\nMax sum=" <<best;
}
