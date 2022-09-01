#include<iostream>
using namespace std;
//to find lcm firstly finding gcd

int gcd(int a,int b)
{   int rem;
    if(b==0)
    return 0;
   
    while(b!=0)
    {
      rem=a%b;
      a=b;
      b=rem;
    }
return a;
}
int lcm(int a,int b)
{
    int p=gcd(a,b);
    int lcm=(a/p)*b;
    return lcm;
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    int l=lcm(a,b);
    cout<<l;
    return 0;
}