#include <bits/stdc++.h>
#include <cstdlib>
#include <time.h>
using namespace std;
bool ok(int x,int k)
{
  //if x>=k then return true else false
  if(x>=k)
    return true;
  else
    return false;
}
int main()
{
  srand(time(0));
  int k=rand()%99999;
  //ok(x) returns true if x is a valid solution else false
  //binary search helps in finding the smallest solution
  int x=-1; //real numbers are sorted
  cout<<"Program selected k to be " <<k <<endl;
  int z=99999;
  for(int b=z;b>=1;b/=2)//z has to very large
    while(!ok(x+b,k)) x+=b;
  cout<<"I found k as " <<x+1;
  //implementation takes total O(ok(n))*O(logn)
}
