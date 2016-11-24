#include<iostream>
using namespace std;
int main()
{
    int T,i,j,digit;
    cin>>T;
    int sum[T];
    int N;
    for(i=0;i<T;i++)
    {
        cin>>N;
        sum[i]=0;
        while(N!=0)
        {
            digit=N%10;
            N/=10;
            sum[i]+=digit;
        }
    }
    for(i=0;i<T;i++)
        cout<<sum[i]<<endl;
}
