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
    int d;
    cin>>d;
    int j=0;
    while(j<d)
    {
        int x=array[n-1];
        for(i=n;i>=1;i--)
        {
            array[i]=array[i-1];
        }
     array[0]=x;
    j++;}


    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
return 0;}