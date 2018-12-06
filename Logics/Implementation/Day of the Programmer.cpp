#include<iostream>
/*https://www.hackerrank.com/challenges/day-of-the-programmer/problem*/
using namespace std;
int main()
{
    int year;
    int date=13,month=9;
    cin>>year;
    if(year!=1918)
    {
        if(year<1918&&!year%4)
            date=12;
        else
        {
            if(!year%400)
            date=12;
            else if(!(year%4)&&year%100)
            date=12;
        }
    }
    else
    {
        date=27;
        month=8;
    }
    if(date<10)
        cout<<'0';
    cout<<date<<'.';
    if(month<10)
        cout<<'0';
    cout<<month<<'.'<<year;

}
