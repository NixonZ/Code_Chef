#include<iostream>
using namespace std;
/*https://www.hackerrank.com/challenges/grading/problem*/
int main()
{
    int T;
    cin>>T;
    int *A=new int[T];
    for(int i=0;i<T;i++)
    {
        cin>>A[i];
    }
    int next5;
    for(int i=0;i<T;i++)
    {
        if(A[i]<38)
            continue;
        next5=5*((A[i]/5)+1);
        if(next5-A[i]<3)
        {
            A[i]=next5;
        }
    }
    for(int i=0;i<T;i++)
        cout<<A[i]<<endl;
}
