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
    for(i=0;i<n;i++)
    {
        if(array[i]<0)
        {
            if(i!=j)
            {
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
return 0;}