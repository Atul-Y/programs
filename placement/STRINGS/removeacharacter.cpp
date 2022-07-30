#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="gttksforgttks";
    string res="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='t')
        {
           continue; 
        }
        else
        {
            res=res+s[i];
        }
    }
    cout<<res;
    return 0;
}