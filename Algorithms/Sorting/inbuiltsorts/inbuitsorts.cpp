#include <bits/stdc++.h>
#include <math.h>
using namespace std;
double mod(pair<int,int> x)
{
  return sqrt(pow(x.first,2)+pow(x.second,2));
}
bool comp(pair<int,int> a,pair<int,int> b)
{
  return mod(a)<mod(b);
}
int main()
{
  vector<int> v={1,3,5,2};
  sort(v.begin(),v.end()); //increasing sort
  for(auto i=v.begin();i!=v.end();i++)
    cout<<*i<<',';
  cout<<'\b'<<'\n';
  sort(v.rbegin(),v.rend()); //decreasing sort
  for(auto i=v.begin();i!=v.end();i++)
    cout<<*i<<',';
  cout<<'\b'<<'\n';
  //sort function requires a comparison operator for the defined data type
  //Example
  vector<pair<int,int>> v1;
  v1.push_back({0,4});
  v1.push_back({3,1});
  v1.push_back({2,2});
  for(int i=0;i<v1.size();i++)
    cout<<'{'<<v1[i].first<<','<<v1[i].second<<'}' <<',';
  cout<<"\b \n";
  sort(v1.begin(),v1.end());//sort based on first element\
  int i=0;
 for(int i=0;i<v1.size();i++)
    cout<<'{'<<v1[i].first<<','<<v1[i].second <<'}'<<',';
 cout<<"\b \n";
 //we can give a separate comp func as parameter to sort
 sort(v1.begin(),v1.end(),comp);
 int i=0;
 for(int i=0;i<v1.size();i++)
    cout<<'{'<<v1[i].first<<','<<v1[i].second <<'}'<<',';
  cout<<"\b \n";
}
