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
    int mid=n/2;
    for(i=0;i<mid;i++)
        {
            int temp=array[i];
            array[i]=array[mid+i];
            array[mid+i]=temp;
        }
    
    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
return 0;}