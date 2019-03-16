#include <iostream>
using namespace std;
int main()
{
  int T;
  cin>>T;
  int A[T];
  int temp1=0;
  int temp2=0;
  for(int i=0;i<T;i++)
  {
    cin>>temp1>>temp2;
    A[i]=temp1%temp2;
  }
  for(int i=0;i<T;i++)
    cout<<A[i]<<endl;
}
