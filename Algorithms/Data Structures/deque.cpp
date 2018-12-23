#include <bits/stdc++.h>
using namespace std;
void print(deque<int> d)
{
  for(auto x:d)
    cout<<x <<',';
  cout<<"\b \n";
}
int main()
{
  //deque is a dynamic array whose size can be efficiently changed at both ends of array
  deque<int> d;
  d.push_back(5);
  print(d);
  d.push_back(2);
  print(d);
  d.push_front(3);
  print(d);
  d.pop_back();
  print(d);
  d.pop_front();
  print(d);
}
