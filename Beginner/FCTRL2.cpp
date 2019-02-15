#include<iostream>
using namespace std;
int fact(int a)
{
    int factn=1;
    for(int i=2;i<=a;i++)
        factn*=i;
    return factn;
}
int main()
{
    int T;
    cin>>T;
    int N[T];
    for(int j=0;j<T;j++)
        cin>>N[j];
    for(int j=0;j<T;j++)
        cout<<fact(N[j])<<endl;
}
