#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "(()())(())";

    string res = "";
    int depth = 0;

    for(char ch : str)
    {
        if(ch == '(')
        {
            if(depth > 0)
            res += ch;

            depth++;
        }
        else
        {
            depth--;

            if(depth > 0)
            res += ch;
        }
    }

    cout<<res<<endl;
}