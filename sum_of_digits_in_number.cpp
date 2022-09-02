#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0,remainder;
    while(n!=0)
    {
        remainder=n%10;
        sum=sum+remainder;
        n/=10;
    }
    cout<<sum;
return 0;}