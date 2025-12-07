#include<bits/stdc++.h>
using namespace std;

int roman2int(string s)
{
    map <char,int> mp;

    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    int num = 0;
    for(int i=0;i<s.length();i++)
    {
       if( i + 1 < s.length() && (mp[s[i]] < mp[s[i+1]]))
       {
        num = num + (mp[s[i+1]] - mp[s[i]]);
        i++;
        continue;
       } 
       else
       num = num + mp[s[i]];
    }

    return num;
}
int main() {

    //string s = "LVIII";
    string s = "MCMXCIV";
    int res = roman2int(s);
    cout<<res<<endl;
}