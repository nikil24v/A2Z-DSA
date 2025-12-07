#include<bits/stdc++.h>
using namespace std;

string rev(string s)
{
    reverse(s.begin(),s.end());
    int n = s.length();
    for(int i=0;i<s.length();i++)
    {
        if(i == n || s[i] == ' ')
        {
            i++;
        continue;
        }

        int start = i;
        while(i < n && s[i]!= ' ')
        {
            i++;
        }
        int ed = i;
        reverse(s.begin()+start,s.begin()+ed);
    }

    return s;
}

int main() {

    string s = "the sky is blue";
    auto res = rev(s);
    cout<<res<<endl;

}