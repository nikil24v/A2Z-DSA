#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "  hello world  ";
    
    while(s[0] == ' ')
    s.erase(0,1);

    while(s[s.size() - 1] == ' ')
    s.pop_back();

    for(int i=0;i<s.length();i++)
    {
        if(s[i] == ' ' && s[i-1] == ' ') {
        s.erase(i,1);
        i--;
        }
    }

    reverse(s.begin(),s.end());
    int start = 0;
    int en = 0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i+1] == ' ' || i+1 == s.length())
        {
            en = i;
            reverse(s.begin()+start,s.begin()+en+1);

            i = i + 2;
            start = i;
        }
    }
    
    
    cout<<s<<endl;
    return 0;   
}