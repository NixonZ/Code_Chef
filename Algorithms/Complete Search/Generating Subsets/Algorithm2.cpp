#include <bits/stdc++.h>
#include <time.h>
using namespace std;
//Method 2- Using bit representation of numbers between 0 and 2^n-1 to tell which elements to include from {0,1,....n-1}
int main()
{
  srand(time(0));
  int n=rand()%5;
  cout<<"n=" <<n <<endl;
  for(int i=0;i<(1<<n);i++)
  {
    vector<int> subset;
    for(int j=0;j<n;j++)
      if(i&(1<<j)) //check if jth bit is set
        subset.push_back(j);
    if(!subset.size())
      cout<<"empty\n";
    else
    {
      cout<<'[';
      for(auto x:subset)
        cout<<x <<',';
      cout<<"\b]\n";
    }
  }
}
// O(n2^n) algorithm
