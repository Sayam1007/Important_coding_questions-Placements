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
    int beg=0;
    int last=n-1;
    int mid;
    int key;
    cin>>key;
    while(beg<=last)
    {
        mid=(beg+last)/2;
        if(array[mid]==key)
        {
            cout<<mid;
            break;
        }
        else if(array[i]>key)
        {
         last=mid-1;
        }
        else{
         beg=mid+1;
        }
    }
return 0;}