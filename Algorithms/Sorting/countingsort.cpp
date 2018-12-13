//O(n)couting algorithm depends on the fact that there is upper bound to c
#include <bits/stdc++.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
  srand(time(0));
  int c;
  cout<<"Enter the upper bound of elements of random array:";
  cin>>c;
  int length=rand()%10;
  int A[length];
  for(int i=0;i<length;i++)
  {
    A[i]=rand()%c;
  }
  int index[c]={};
  for(int i=0;i<length;i++)
    index[A[i]]++;
  int j=0;
  for(int i=0;i<c;i++)
      while(index[i]>0)
      {
        A[j++]=i;
        index[i]--;
      }
  for(int i=0;i<length;i++)
    cout<<A[i]<<',';
  cout<<'\b';
}
