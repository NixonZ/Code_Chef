#include<iostream>
using namespace std;
int main()
{
    int i=0,j,k;
    int N[100],flag[100];
    while(1)
    {
        cin>>N[i];
        if(N[i]==0)
            break;
        int A[N[i]],B[N[i]];
        for(j=0;j<N[i];j++)
            cin>>A[j];
        for(j=0;j<N[i];j++)
            B[A[j]-1]=j+1;
        flag[i]=0;
        for(j=0;j<N[i];j++)
        {
            if(A[j]!=B[j])
             flag[i]=1;
        }
        i++;
    }
    for(j=0;j<i;j++)
    {
        (flag[j])?cout<<"not ambiguous\n":cout<<"ambiguous\n";
    }
}
