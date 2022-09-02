#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//peak element - element which is greater then its neighbour elements first element and last 
//element does not have two neighbours so they are not considered.
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
vector<int>p; //vector of int type to store all the peak elements in array
for(i=1;i<=n-1;i++)
{
    if(array[i]>array[i-1] && array[i]>array[i+1])
    {
         p.push_back(array[i]);
    }
}
//sorting the vector to find the smallest peak element
sort(p.begin(),p.end());
//after sorting displaying the smallest element
cout<<p[0];
return 0;
}