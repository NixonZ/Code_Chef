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
  int k,a=0,b=length;
  int temp=0;
  for(int i=0;i<length;i++)
  {
    k=(a+b)/2;
    if(x<A[k])
      b=k;
    else if(x>A[k])
      a=k;
    else
    {
      temp=1;
      break;
    }
  }
  if(temp==1)
    cout<<"Element found\n";
  else
    cout<<"Element not found\n";
}
