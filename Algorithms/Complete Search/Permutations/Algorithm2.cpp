#include <bits/stdc++.h>
#include <time.h>
using namespace std;
int main()
{
  srand(time(0));
  int n=rand()%5;
  vector<int> permutation;
  cout<<"n=" <<n <<endl;
  for(int i=0;i<n;i++)
    permutation.push_back(i);
  do
  {
    cout<<'[';
    for(auto x:permutation)
      cout<<x <<',';
    cout<<"\b]\n";
  } while(next_permutation(permutation.begin(),permutation.end()));
}
