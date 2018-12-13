#include <bits/stdc++.h>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
  srand(time(0));
  int length=rand()%10;
  int A[length];
  for(int i=0;i<length;i++)
    A[i]=rand()%10;
  int x=rand()%10;
  //I have to sort the array
  sort(A,A+length);
  for(int i=0;i<length;i++)
    cout<<A[i]<<',';
  cout<<"\b \nLet us search for " <<x<<endl;
  int k=0;
  for(int i=length/2;i>=1;i/=2)
    while(k+i<length&&A[k+i]<=x)
      k+=i;
  if(A[k]==x)
    cout<<"Element found";
  else
    cout<<"Element not found";
}
