#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
struct point
{
    int x;
    int y;
};
int Dy(int a,int b)
{
    return(abs(a-b));
}
int Dx(int c,int d)
{
    return(abs(c-d));
}
int main()
{
    int T,N;
    point P;
    point *Q=&P;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>N;
        for(j=0;j<N;j++)
        {
            cin>>*(Q+j).x>>*(Q+j).y;
        }
    }
    int minm;
    for(i=0;i<T;i++)
    {
        for(j=0;j<N;j++)
        {
            for(int k=0;k<N-1;k++)
        }
    }
}
