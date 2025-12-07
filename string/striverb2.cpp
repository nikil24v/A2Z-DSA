#include<bits/stdc++.h>
using namespace std;

void revwords(string &s)
{
    while(s.front() == ' ')
    s.erase(s.begin());

    while(s.back() == ' ')
    s.pop_back();

    for(int i=0;i<s.length();i++)
    {
        if(s[i] == ' ' && s[i + 1] == ' ')
        {
            s.erase(i,1);
            i--;
        }
    }
    reverse(s.begin(),s.end());

    int n = s.length() - 1;
    int i = 0;

    while(i<n) {

        while(s[i] == ' ')
        i++;

        int start = i;

        while(i<=n && s[i]!=' ')
        i++;

        reverse(s.begin()+start ,s.begin()+i);
    }
    cout<<s<<endl;
}
int main() {

    string s = " hello  world ";
    revwords(s);
}