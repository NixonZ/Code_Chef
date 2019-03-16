#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  int A[T],B[T],lead[T],dif[T];
  for(int i=0;i<T;i++)
  {
    cin>>A[i]>>B[i];
    dif[i]=abs(A[i]-B[i]);
    if(A[i]>B[i])
      lead[i]=1;
    else
      lead[i]=2;
  }
  int max=dif[0];
  int maxindex=lead[0];
  for(int i=0;i<T;i++)
    if(max<dif[i])
    {
      max=dif[i];
      maxindex=lead[i];
    }
  cout<<maxindex<<' '<<max;
}
