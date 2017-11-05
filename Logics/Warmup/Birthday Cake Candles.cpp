#include<iostream>
using namespace std;
//https://www.hackerrank.com/challenges/birthday-cake-candles/problem
int main()
{
    int n,i,max,count=0;
    cin>>n;
    int *height=new int[n];
    for(i=0;i<n;i++)
    {
        cin>>height[i];
        if(!i)
            max=height[i];
        if(height[i]>max)
            max=height[i];
    }
    for(i=0;i<n;i++)
        if(height[i]==max)
        count++;
    cout<<count;
}
