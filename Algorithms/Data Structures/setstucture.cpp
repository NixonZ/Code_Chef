#include <bits/stdc++.h>
using namespace std;
int main()
{
  //set vs unordered set
  set<int> s; //uses binary search O(log n) algorithms
  unordered_set<int> s1; // uses hashing O(1) algorithms
  for(int i=0;i<4;i++)
    s.insert(i);
  s.erase(2);
  s.insert(1);//doesnt do anything
  cout<<s.count(1) <<endl;
  //all elements in set are distinct count always returns 1 or 0
  //we use multiset for this
  multiset<int> s2;
  s2.insert(5);
  s2.insert(5);
  s2.insert(5);
  cout<<s2.count(5) <<endl;
}
