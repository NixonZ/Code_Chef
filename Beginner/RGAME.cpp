#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int T,N,i,j,b=1; int *B=new int;
    cin>>T;
    int result[T];
    for(i=0;i<T;i++)
    {
        cin>>N;
        for(j=0;j<N+1;j++)
            cin>>*(B+j);
            result[i]=0;
            b=1;
        for(j=1;j<N+1;j++)
        {
            if(*(B+j-1)==j)
            {
                *(B-b)=*(B+j);
                result[i]+=((*(B+j))*(*(B-b+1))+(*(B+j))*(*(B+j-1)));
                b++;
            }
        }
    }
    for(i=0;i<T;i++)
        cout<<result[i]<<endl;
    delete B;
}
