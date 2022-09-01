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
        int flag=0;
        int count=0;
        for(j=i+1;j<n;i++)
        {
            if(array[i]==array[j])
            {
                flag=1;
                break;
            }
        }
        
        if(flag==1)
        continue;
        
        for(j=0;j<=i;j++)
        {
            if(array[i]==array[j])
            {
                count++;
            }
      }
   
    cout<<array[i]<<" "<<count<<endl;
    }
return 0;}