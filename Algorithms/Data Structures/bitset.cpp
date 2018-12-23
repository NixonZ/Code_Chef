#include <bits/stdc++.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
  srand(time(0));
  //bitset is an array whose every element is 0 or 1
  bitset<5> s; //defaulted to 0
  for(int i=0;i<5;i++)
    s[i]=rand()%2;
  cout<<"s="<<s <<endl;
  bitset<5> p;
  for(int i=0;i<5;i++)
    p[i]=rand()%2;
  cout<<"p="<<p<<endl;
//each element in bitset uses only 1 bit
  cout<<"Number of ones in s=" <<s.count()<<endl;
  cout<<"s&p=" <<(s&p) <<endl;
  cout<<"s|p=" <<(s|p) <<endl;
  cout<<"s^p=" <<(s^p) <<endl;
}
