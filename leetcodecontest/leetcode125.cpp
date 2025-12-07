#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string s = "0P";
    cout<<s<<endl;
    for(int i=0;i<s.length();i++)
    {
        s[i] = tolower(s[i]);
        if(!((s[i]>='a' && s[i]<='z') || (s[i] >='0' && s[i] <='9')))
        {
            s.erase(i,1);
            i--;
        }
    }

    cout<<s<<endl;
    return 0;
    int i = 0;
    int j = s.length() - 1;

    bool res = false;
    for(;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        break;
    }


    if(i>=j)
    res = true;

    cout<<res<<endl;    
    cout<<s<<endl;
    
}