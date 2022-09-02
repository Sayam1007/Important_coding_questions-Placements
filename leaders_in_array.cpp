#include<iostream>
#include<vector>
using namespace std;
/*
An array element A[i] is called Leader, 
if all the elements following it (i.e. present at its right) are less than or equal to A[i].
*/
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
vector<int>p;
for(i=0;i<n;i++)
{
    if(array[i]>=array[i+1])
    {
        p.push_back(array[i]); //pushing all the leader elements in vector 
    }
}
for(i=0;i<p.size();i++)
{
    cout<<p[i]<<" ";
}
return 0;}