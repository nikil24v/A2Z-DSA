#include<bits/stdc++.h>
using namespace std;

string freqsort(string s)
{
    map<char,int> mp;

    for(auto it: s)
    {
        mp[it]++;
    }

    priority_queue<pair<int,char>> pq;

    for(auto it: mp)
    {
        pq.push({it.second,it.first});
    }

    string res = "";
    while(!pq.empty())
    {
        auto top = pq.top();
        pq.pop();

        char ch = top.second;
        int freq = top.first;

        while(freq--)
        {
            res+=ch;
        }
    }
    return res;
}
int main() {

    string s = "tree";
    auto res = freqsort(s);
    cout<<res<<endl;
}