#include <bits/stdc++.h>
#include <cstdlib>
#include <time.h>
using namespace std;
//bubble sort has time complexity O(n^2)
int main()
{
  srand(time(0));
  int length=rand()%10;
  int A[length];
  for(int i=0;i<length;i++)
  {
    A[i]=rand()%100;
  }
  int temp;
  int check;
  for(int i=0;i<length;i++)
  {
    check=1;
    for(int j=0;j<length-1;j++)
    {
      if(A[j]>A[j+1])
      {
        temp=A[j];
        A[j]=A[j+1];
        A[j+1]=temp;
        check=0;
      }
    }
    if(check) break;
  }
  for(int i=0;i<length;i++)
    cout<<A[i]<<',';
  cout<<'\b';  
}
