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
    int max=0;
    for(i=0;i<n;i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }
    cout<<max;
    return 0;
}
