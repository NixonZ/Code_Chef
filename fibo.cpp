#include <bits/stdc++.h>
using namespace std;
int next_fibo(int n)
{
  if(n==0)
    return 0;
  else if(n==1)
    return 1;
  else
    return next_fibo(n-1)+next_fibo(n-2);
}
int main()
{
  for(int i=1;i<=5;i++)
  {
    cout<<next_fibo(i)<<',';
  }
  cout<<'\b';
}
