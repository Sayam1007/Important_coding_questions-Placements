#include<iostream>
using namespace std;

//majority element - element that occurs more than n/2 times in array
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
int majority,count=0,j;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
    if(array[i]==array[j])
    {
        count++;
    }
}
if(count>(n/2))
{
    majority=array[i];
}
}
cout<<majority;
return 0;}