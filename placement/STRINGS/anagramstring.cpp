#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "ABCD";
    string p = "AECD";
    if (s.length() != p.length())
    {
        cout << "not anagram";
    }
    else
    {
        sort(s.begin(), s.end());
        sort(p.begin(), p.end());

        int flag = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != p[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "anagram";
        }
        else
        {
            cout << "not anagram";
        }
    }
    return 0;
}