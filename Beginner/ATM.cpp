#include <iostream>
using namespace std;

int main()
{
  int x;
  float y;
  cin>>x>>y;
  if(x%5||(y-0.50)<x)
    cout<<y;
  else
    cout<<(y-0.50-x);
}
