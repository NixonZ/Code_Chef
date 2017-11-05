#include<iostream>
using namespace std;
//https://www.hackerrank.com/challenges/the-birthday-bar/problem
int main()
{
    int n,i,j;
    cin>>n;
    int *choc=new int[n];
    for(i=0;i<n;i++)
        cin>>choc[i];
    int m,d,count=0,temp;
    cin>>d>>m;
    for(i=0;i<=n-m;i++)
    {
        temp=0;
        for(j=i;j<m+i;j++)
            temp+=choc[j];
        if(temp==d)
            count++;
    }
    cout<<count;
}
