#include <bits/stdc++.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
  srand(time(0));
  int length=rand()%10;
  int A[length];
  for(int i=0;i<length;i++)
    A[i]=rand()%10;
  int x=rand()%10;
  sort(A,A+length);
  //these functions assume that array is sorted
  for(int i=0;i<length;i++)
    cout<<A[i]<<',';
  cout<<"\b \n";
  cout<<"random number selected is " <<x <<endl;
  //lower_bound returns pointer to first array element whose value is atleast x
  auto k=lower_bound(A,A+length,x)-A;
  if(A[k]==*(A+length))
    cout<<"Least Element not found\n";
  else if(k<length)
    cout<<"Least element is at " <<k+1 <<" and is "<<A[k] <<endl;
  //upper_bound returns pointer to first array element whose value is atmost x
  //equal range returns both of them
  //if not found these functions return end()
  auto l=upper_bound(A,A+length,x)-A;
  if(A[l]==*(A+length))
    cout<<"Atmost Element not found\n";
  else if(l<length)
    cout<<"atmost element is at " <<l+1 <<" and is "<<A[l] <<endl;
  //equal range returns both
  auto r=equal_range(A,A+length,x);
  cout<<"Number of elements with value " <<x <<" is " <<r.second-r.first <<endl;
}
