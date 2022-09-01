#include<iostream>
using namespace std;

int prime(int n)
{
    if(n<=1)
    return 0;

    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
} 


int main()
{
int m,n,flag=0;
cout<<"Enter lower range";
cin>>m;
cout<<"Enter higher range";
cin>>n;
for(int i=m;i<=n;i++)
{
  flag=prime(i);
  if(flag==1)
  {
    cout<<i<<" ";
  }
}
return 0;}