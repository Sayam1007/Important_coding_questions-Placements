#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    int array[n];
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int count0=0,count1=0,temp;
    for(i=0;i<n;i++)
    {
        if(array[i]==0)
        {
            count0++;
        }
        if(array[i]==1)
        {
            count1++;
        }
    }
    temp=count0+count1;
    for(i=0;i<count0;i++)
    {
        array[i]=0;
    }
    for(i=count1;i<temp;i++)
    {
        array[i]=1;
    }
    for(i=temp;i<n;i++)
    {
        array[i]=2;
    }
    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
return 0;}