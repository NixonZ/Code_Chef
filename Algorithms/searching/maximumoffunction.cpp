#include <bits/stdc++.h>
#include <math.h>
#include <cstdlib>
#include <time.h>
using namespace std;
double f(int x,int k)
{
  return (-1)*pow((x-k),2)+3;
}
int main()
{
  srand(time(0));
  int k=rand()%99999;
  int z=99999;
  int x=-1;
  for(int b=z;b>=1;b/=2)
    while(f(x+b,k)<f(x+b+1,k)) x+=b;
  cout<<"Maximum at " <<x+1;
  //cout<<k;
}
