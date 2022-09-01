#include<iostream>
using namespace std;
string trim_spaces(string s)
{
    string word="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            word+=s[i];
        }
    }
    return word;
}
int main()
{
    string s;
    getline(cin,s);
    string p=trim_spaces(s);
    cout<<p;
return 0;}