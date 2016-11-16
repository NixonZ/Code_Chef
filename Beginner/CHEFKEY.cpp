#include<iostream>
using namespace std;
int cnt(int , int ,int );
int main()
{
    int T,x=0;
    cin>>T;
    int n[T],m[T],c[T],count[T],h,l;
    for(h=0;h<T;h++)
    {
        cin>>n[h]>>m[h]>>c[h];
        cout<<endl;
    }
    for(l=0;l<T;l++)
    {
        cout<<cnt(n[l],m[l],c[l])<<endl;
    }
}
int cnt( int a, int b, int d)
{
    int count=0;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            if(i*j==d)
            count++;
        }
    }
    return(count);
}
