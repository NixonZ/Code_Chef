#include<iostream>
using namespace std;
/*https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem*/
int main()
{
    int n,i,j;
    cin>>n;
    int score[n];
    for(i=0;i<n;i++)
        cin>>score[i];
    int max=score[0],min=score[0],breakmax=0,breakmin=0;
    for(i=0;i<n;i++)
    {
        if(score[i]>max)
        {
            max=score[i];
            breakmax++;
        }
        else if(score[i]<min)
        {
            min=score[i];
            breakmin++;
        }
        else
            continue;
    }
    cout<<breakmax<<' ' <<breakmin;
}
