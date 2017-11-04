#include<iostream>
using namespace std;
/*https://www.hackerrank.com/challenges/kangaroo/problem*/
int main()
{
    int x[2],v[2],i;
    bool temp;
    cin>>x[0]>>v[0]>>x[1]>>v[1];
    if(x[0]>x[1])
        i=0;
    else if(x[0]<x[1])
        i=1;
    else
    {
        if(v[0]==v[1])
            cout<<"YES";
        else
            cout<<"NO";
        return 0;
    }
    int distbw,relvel;
    if(!i)
    {
        distbw=x[0]-x[1];
        relvel=v[1]-v[0];
        if(relvel>0&&!(distbw%relvel))
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
    {
        distbw=x[1]-x[0];
        relvel=v[0]-v[1];
        if(relvel>0&&!(distbw%relvel))
            cout<<"YES";
        else
            cout<<"NO";
    }
}
