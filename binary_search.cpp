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
    int key;
    cin>>key;
    int beg=0;
    int last=n-1;
    while(beg<=last)
    {
        int mid=(beg+last)/2;
        if(array[mid]==key)
        {
            cout<<mid;
            break;
        }
        else if(array[mid]>key)
        {
            last=mid-1;
        }
        else{
            last=mid+1;
        }
    }
return 0;}