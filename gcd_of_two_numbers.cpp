#include<iostream>
using namespace std;
int main()
{
    int a,b,rem;
    cin>>a;
    cin>>b;
    if(b==0)
    return 0;

    while(b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
cout<<a;
return 0;}