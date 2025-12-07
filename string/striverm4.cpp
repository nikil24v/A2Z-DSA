#include<bits/stdc++.h>
using namespace std;

int  myatoi(string s)
{
    int num = 0;
    while(!s.empty() && s[0] == ' ')
    s.erase(0,1);

    bool is_neg = false;
    if(s[0] == '-')
    {
        is_neg = true;
        s.erase(0,1);
    }

    while(s[0] == '0')
    s.erase(0,1);

    for(int i=0;i<s.length();i++)
    {
        if(!(s[i] >= '0' && s[i]<='9'))
        break;

        int n = s[i] - '0';
        num = num * 10 + n;
    }

    if(is_neg)
    num = num * -1;

    return num;
}
int main() {

    string s = "words and 987";
    int res = myatoi(s);
    cout<<res<<endl;
}   