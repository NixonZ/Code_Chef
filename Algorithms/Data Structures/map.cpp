#include <bits/stdc++.h>
using namespace std;
int main()
{
  //map is a dictionary consist of key-value-pairs
  //keys can be of anydata type
  map<string,int> m;
  m["monkey"]=6;
  m["word"]=4;
  cout<<m["length"]<<'\n'; //automatically added
  m["length"]=6;
  //count checks if a key exists or not
  if(m.count("word"))
    cout<<"Exists\n";
  for(auto x:m)//gives all the keys and values
  {
    cout<<"m["<<x.first<<"]:"<<x.second<<'\n';
  }
}
