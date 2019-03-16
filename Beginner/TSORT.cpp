#include <bits/stdc++.h>
#include <string.h>
#include <math.h>
using namespace std;
int temp;
int *msort(int A[],int n)
{
  int k=ceil(n/2);
  int B[k],C[n-k];
  for(int i=0;i<k;i++)
    B[i]=A[i];
  for(int i=0;i<n-k;i++)
    C[i]=A[i+k];
  if(k!=1)
    msort(B,k);
  if((n-k)!=1)
    msort(C,n-k);
  int i=0,j=0,l=0;
  while((i<k)&&(j<n-k))
  {
    if(B[i]<C[j])
      A[l++]=B[i++];
    else
      A[l++]=C[j++];
  }
  while(i<k)
    A[l++]=B[i++];
  while(j<n-k)
    A[l++]=C[j++];
  return A;
}
int main()
{
  int T;
  cin>>T;
  int A[T];
  for(int i=0;i<T;i++)
    cin>>A[i];
  msort(A,T);
  for(int i=0;i<T;i++)
    cout<<A[i]<<endl;
}
