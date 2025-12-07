#include<bits/stdc++.h>
using namespace std;

bool rot(string s,string goal)
{
    int cnt = 0;

    while(cnt < goal.size())
    {
        if(s == goal)
        return true;

        char ch = s.front();
        s.erase(s.begin());
        s.push_back(ch);

        cnt++;
    }
    return false;
}
int main() {

    string s = "abcde";
    string goal = "cdeab";

    auto res = rot(s,goal);
    cout<<boolalpha;
    cout<<res<<endl;
}