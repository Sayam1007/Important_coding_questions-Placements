#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    cin>>s1;
    int flag=1;
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());
    if(s.length()==s1.length())
    {
        for(int i=0;i<s1.length();i++)
        {
         if(s[i]!=s1[i])
         {
            flag=0;
         }
        }
    }
    if(flag==1)
    {
        cout<<"Anagram";
    }
    else{
        cout<<"Not a Anagram";
    }
return 0;}