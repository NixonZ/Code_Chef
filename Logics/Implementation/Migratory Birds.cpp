#include<iostream>
/*https://www.hackerrank.com/challenges/migratory-birds/problem*/
using namespace std;
int main()
{
    int T;
    cin>>T;
    int *A=new int[T];
    int count[5]={0,0,0,0,0};
    int save,max;
    for(int i=0;i<T;i++)
    {
        cin>>A[i];
        count[A[i]-1]++;
    }
    for(int i=0;i<5;i++)
    {
        if(!i)
        {
            max=count[i];
            save=i;
        }
        if(count[i]>max)
        {
            max=count[i];
            save=i;
        }
        else if(count[i]==max&&save>i)
        {
            max=count[i];
            save=i;
        }
    }
    cout<<save+1;
}
