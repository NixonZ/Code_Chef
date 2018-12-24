#include <bits/stdc++.h>
#include <time.h>
using namespace std;
//Method-1: Using recurssion
int n;
vector<int> permutation;
void search(bool chosen[])
{
  if(permutation.size()==n)
  {
    cout<<'[';
    for(auto x:permutation)
      cout<<x <<',';
    cout<<"\b]\n";
  }
  else
  {
    for(int i=0;i<n;i++)
    {
      if(chosen[i])
        continue;
      chosen[i]=true;
      permutation.push_back(i);
      search(chosen);
      chosen[i]=false;
      permutation.pop_back();
    }
  }
}
int main()
{
  srand(time(0));
  ::n=rand()%5;
  cout<<"n=" <<n<<endl;
  bool chosen[::n];
  for(int i=0;i<n;i++)
    chosen[i]=false;
  search(chosen);
}
