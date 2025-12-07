#include<bits/stdc++.h>
using namespace std;

string longestprefix(vector<string>&strs)
{
    string res = "";
    
    for(int j=0;j<strs[0].size();j++)
    {
        bool flag = true;
        char ch = strs[0][j];
        for(int i=1;i<strs.size();i++)
        {
            if(ch != strs[i][j])
            flag = false;
        }

        if(flag)
        {
            res = res + ch;
        }
    }
    return res;
}
int main() {

    vector<string> strs = {"flower","flow","flight"};
    auto res = longestprefix(strs);

    cout<<res<<endl;
}