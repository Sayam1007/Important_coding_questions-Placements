#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0;
    int n=s.length()-1;
    int flag=1;
    while(i<=n)
    {
     if(s[i]!=s[n])
     {
        flag=0;
     }
    i++;
    n--;}
    if(flag==1)
    {
        cout<<"Pallindrome";
    }
    else{
        cout<<"Not a Pallindrome";
    }
return 0;}