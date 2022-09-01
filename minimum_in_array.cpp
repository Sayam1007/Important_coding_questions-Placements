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
    int min=array[0];
    for(i=0;i<n;i++)
    {
        if(min>array[i])
        {
            min=array[i];
        }
    }
    cout<<min;
return 0;}