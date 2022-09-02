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
    for(i=0;i<n;i+=2)
    {
        int temp=array[i];
        array[i]=array[i+1];
        array[i+1]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }

return 0;}