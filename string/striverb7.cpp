#include<bits/stdc++.h>
using namespace std;

bool is_angram(string s ,string t)
{
    if(s.size()!=t.size())
    return false;

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    for(int i=0;i<s.size();i++)
    {
        if(s[i] != t[i])
        return false;
    }

    return true;
}
int main() {

    string s = "cat";
    string t = "act";

    auto res = is_angram(s,t);
    cout<<boolalpha<<res<<endl;
}