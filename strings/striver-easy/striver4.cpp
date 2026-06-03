#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> strs = {"flower","flow","flight"};
    string res = "";
    for(int i=0;i<strs[0].size();i++)
    {
        char ch = strs[0][i];
        bool temp = true;
        for(int j=1;j<strs.size();j++)
        {
            if(ch != strs[j][i])
            {
                temp = false;
                break;
            }
            
        }

        if(temp)
        {
            res = res + ch;
        }
    }

    cout<<res<<endl;
}