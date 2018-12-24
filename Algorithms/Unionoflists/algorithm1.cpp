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
  for(int i=0;i<l1;i++)
    cout<<A[i]<<',';
  cout<<"\b \n";
  for(int i=0;i<l2;i++)
    cout<<B[i]<<',';
  cout<<"\b \n";
  int temp=0;
//Algorithm 1: create a set for A and iterate elements of B through it O(nlogn)
  set<int> s;
  for(auto x:A)
    s.insert(x);
  set<int> unionAB;
  for(auto x:B)
    if(s.count(x))
    {
      temp++;
      unionAB.insert(x);
    }
  cout<<"Number of common elements=" <<temp;
}
