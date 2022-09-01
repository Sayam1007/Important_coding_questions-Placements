#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n];
    int count=0;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(i=0;i<n;i++)
    {
        if(array[i]!=0)
        {
            array[count]=array[i];
            count++;
        }
    }
    while(count<n)
    {
        array[count]=0;
        count++;
    }
    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
return 0;}