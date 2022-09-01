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
        int current=array[i];
        j=i-1;
        while(array[j]>current && j>=0)
        {
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=current;
    }
    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
return 0;}