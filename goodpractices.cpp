#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 //use this for heavy integers
#define REP(a,b) for(int i=a;i<=b;i++)
#define SQ(a) (a)*(a)
#define m 47055833459

int main()
{
  /*freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);//use this to input and output on files*/
  cin.tie(0);
  //while(cin>>x)   //A good way to take inputs till they last
  //modular arithmetic is important
  int x=1;
  REP(0,999999999)
  {
    x=(x*i)%m;
    if(x<0) x+=m; // to ensure no negative numbers
  }
  cout<<x%m <<endl;
  //it is risky to compare floating point numbers
  int x1=1;
  long double x2=0.3*0.3+0.1;
  if(x1==x2)
    cout<<"yo\n";
  else if (abs(x1-x2)>1e-9)
    cout<<"YOYOY\n";
}
