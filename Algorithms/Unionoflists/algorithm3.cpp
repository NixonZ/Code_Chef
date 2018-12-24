#include <bits/stdc++.h>
#include <time.h>
using namespace std;
int main()
{
  srand(time(0));
  int l1=rand()%10;
  int l2=rand()%10;
  int A[l1],B[l2];
  for(int i=0;i<l1;i++)
    A[i]=rand()%10-rand()%10;
  for(int i=0;i<l2;i++)
    B[i]=rand()%10-rand()%10;
  sort(A,A+l1);
  sort(B,B+l2);
  for(int i=0;i<l1;i++)
    cout<<A[i]<<',';
  cout<<"\b \n";
  for(int i=0;i<l2;i++)
    cout<<B[i]<<',';
  cout<<"\b \n";
  int temp=0;
//Algorithm 3: sort both arrays and iterate through both the lists
  int len=min(l1,l2);
  int l=0,m=0;
  for(int i=0;i<len;i++)
  {
    if(A[l]<B[m])
      l++;
    else if(A[l]>B[m])
      m++;
    else
    {
      l++;
      m++;
      temp++;
    }
  }
  cout<<"Number of common elements=" <<temp;
}
