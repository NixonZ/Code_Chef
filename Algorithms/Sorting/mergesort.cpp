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
  if(k==2)
  {
    if(B[0]>B[1])
    {
      temp=B[0];
      B[0]=B[1];
      B[1]=temp;
    }
  }
  if((n-k)==2)
  {
    if(C[0]>C[1])
    {
      temp=C[0];
      C[0]=C[1];
      C[1]=temp;
    }
  }
  if(k!=1)
    msort(B,k);
  if((n-k)!=1)
    msort(C,n-k);
  if(B[k-1]>C[0])
  {
    temp=C[0];
    C[0]=B[k-1];
    B[k-1]=temp;
  }
  for(int i=0;i<k;i++)
    A[i]=B[i];
  for(int i=0;i<n-k;i++)
    A[i+k]=C[i];
  return A;
}
int main()
{
  srand(time(0));
  int length=rand()%10;
  int A[length];
  for(int i=0;i<length;i++)
  {
    A[i]=rand()%100;
  }
  for(int i=0;i<length;i++)
    msort(A,length);
  for(int i=0;i<length;i++)
    cout<<A[i]<<',';
  cout<<'\b';  
}
