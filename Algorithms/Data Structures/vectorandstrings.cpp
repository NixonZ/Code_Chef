#include <bits/stdc++.h>
#include <string.h>
using namespace std;
//fun with vectors.cpp
int main()
{
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  for(int i=0;i<v.size();i++)
    cout<<v[i]<<',';
  cout<<"\b \n";
  vector<int> v1(5,10);// v1(length,number)
  for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<',';
  cout<<"\b \n";
  //another way to iterate through vector
  for(auto x : v)
    cout<<x <<',';
  cout<<"\b \n";
  string a="hello";
  string b=a+a;
  cout<<b.find("loh")<<endl;
  cout<<b.substr(b.find("loh"),strlen("loh"));
}
