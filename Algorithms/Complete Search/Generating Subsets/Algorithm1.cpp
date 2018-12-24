#include <bits/stdc++.h>
#include <time.h>
using namespace std;
//Method 1- Recursive Search returns all subsets of {0,1,...n-1}
int n;
vector<int> subsets;
void search(int k)
{
  if(k==n)
  {
    if(!subsets.size())
     cout<<"empty\n";
    else
    {
      cout<<'[';
      for(auto x:subsets)
        cout<<x <<',';
      cout<<"\b]\n";
    }
  }
  else
  {
    search(k+1); //this search doesnt get k
    subsets.push_back(k);
    search(k+1); //this search gets k
    subsets.pop_back();
  }
}
int main()
{
  srand(time(0));
  ::n=rand()%5;
  cout<<"n=" <<::n <<endl;
  search(0);
}
//very beautiful O(2^n) algorithm
