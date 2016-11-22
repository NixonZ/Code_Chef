#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int T,N;
    cin>>T;
    int save[T];
    for(int i=0;i<T;i++)
    {
        cin>>N;
        save[i]=N/2+1;
    }
    for(int i=0;i<T;i++)
        cout<<save[i]<<endl;
}
