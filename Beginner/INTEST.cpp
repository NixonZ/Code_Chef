#include <iostream>
using namespace std;
int main()
{
  int T,k;
  cin>>T>>k;
  int count=0;
  int temp;
  for(int i=0;i<T;i++)
  {
    cin>>temp;
    if(temp%k==0)
      count++;
  }
  cout<<count;
}
