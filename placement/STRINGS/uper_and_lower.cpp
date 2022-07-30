#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    string str="gskkgfn1  msmg,nlvnljkfhksjglns";

    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;   //32 piche kich do 
        }

    }
    cout<<str;

    for(int i=0;i<str.size();i++){
        if(str[i]>='A'  &&  str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
    cout<<endl;
    cout<<str;
    return 0;
}