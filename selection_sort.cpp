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
    int j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]>array[j])
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
return 0;}