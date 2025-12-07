#include<bits/stdc++.h>
using namespace std;

string removep(string &s)
{
    string res;
    int depth = 0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '(')
        {
            if(depth > 0)
            res = res + s[i];

            depth++;
        }
        else
        {
            depth--;
            if(depth > 0)
            res = res + s[i];
        }
    }
    return res;
}
int main() {

    string s = "(()())(())";
    auto res = removep(s);

    cout<<res<<endl;
}