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
        int leftsum=0;
        for(j=0;j<i;j++)
        {
            leftsum+=array[i];
        }
        int rightsum=0;
        for(j=i+1;j<n;j++)
        {
            rightsum+=array[i];
        }
        if(leftsum==rightsum)
        {
            cout<<i;
            break;
        }
    }
return 0;}