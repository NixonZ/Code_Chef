#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int N[T];
    int sum[T];
    for(int i=0;i<T;i++)
    {
        cin>>N[i];
        int A[N[i]][N[i]],temp;
        for(int j=0;j<N[i];j++)
        {
            for(int k=0;k<=j;k++)
                cin>>A[j][k];
        }
        int p=0;
        sum[i]=0;
        for(int j=0;j<N[i];j++)
        {
            temp=A[j][p];
            for(int k=p;k<=p+1;k++)
            {
                if(A[j+1][k]>=temp)
                {
                    temp=A[j][k];
                    p=k;
                }

            }
            sum[i]+=temp;
        }
    }
    for(int i=0;i<T;i++)
        cout<<sum[i]<<endl;
}
