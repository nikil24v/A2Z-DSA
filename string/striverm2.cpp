#include<bits/stdc++.h>
using namespace std;

int maxdepth(string s)
{
    int depth = 0;
    int maxi = 0;
    for(int i=0;i<s.length();++i)
    {
        if(s[i] == '(')
        depth = depth + 1;
        else if(s[i] == ')')
        depth = depth - 1;

        if(depth > maxi)
        maxi = depth;
    }
    return maxi;
}
int main()
{
    string s = "(1+(2*3)+((8)/4))+1";
    int res = maxdepth(s);
    cout<<res<<endl;
}