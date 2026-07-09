#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abcde";
    string goal = "cdeab";

    if(s.size()!=goal.size())
    {
        cout<<"Eror"<<endl;
    }

    for(int i=0;i<s.size();i++)
    {
        if(s == goal)
        {
            cout<<"Success"<<endl;
            break;
        }

        char ch = s[0];
        s.erase(0,1);
        s.push_back(ch);
    }

    
}