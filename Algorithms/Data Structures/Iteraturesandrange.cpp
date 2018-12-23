#include <bits/stdc++.h>
#include <time.h>
#include <cstdlib>
using namespace std;
int main()
{
  //iterator is a variable which points to an element in data structure
  //begin() points to first element and end() points to position after last element
  srand(time(0));
  int length=rand()%10+1;
  vector<int> v;
  for(int i=0;i<length;i++)
    v.push_back(rand()%10);
  for(auto x:v)
    cout<<x <<',';
  cout<<"\b \n";
  sort(v.begin(),v.end());
  for(auto x:v)
    cout<<x <<',';
  cout<<"\b \n";
  random_shuffle(v.begin(),v.end());
  for(auto x:v)
    cout<<x <<',';
  cout<<"\b \n";
  //these can also be used with ordinary arrays
//----Iterator for a set--------------
  cout<<"SETS\n";
  set<int> s;
  length=rand()%10+1;
  for(int i=0;i<length;i++)
    s.insert(rand()%10);
  set<int>::iterator it=s.begin(); //it points to the smallest element in set //else use auto datatype
  for(auto it=s.begin();it!=s.end();it++)
    cout<<*it<<',';
  cout<<"\b \n";
  //find(x) returns iterator that points to element whose value is x however returns end if not found
  int x=rand()%10;
  cout<<x<<endl;
  auto temp=s.find(x);
  if(temp==s.end())
  {
    cout<<"Not found\n";
    //finding nearest element
    auto it=s.lower_bound(x);
    if(it==s.begin())
      cout<<"Nearest element is " <<*it <<'\n';
    else
    {
      int a=*it;
      it--;
      int b=*it;
      if(x-b<a-x)
        cout<<"Nearest element is " <<b <<'\n';
      else
        cout<<"Nearest element is " <<a <<'\n';
    }
  }
  else
    cout<<"Found\n";
}
