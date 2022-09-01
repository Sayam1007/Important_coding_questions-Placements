#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        if(array[i]==0)
        {
            count++;
        }
    }
    for(i=0;i<count;i++)
    {
        array[i]=0;
    }
    for(i=count;i<n;i++)
    {
        array[i]=1;
    }
    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }

return 0;}