#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n];
    int i,product=1;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    //product of all elements in array:

    for(i=0;i<n;i++)
    {
        product=product*array[i];
    }
    //second array
    int p[n];
    for(i=0;i<n;i++)
    {
        p[i]=product/array[i];
    }
    //new array
    for(i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }

return 0;}