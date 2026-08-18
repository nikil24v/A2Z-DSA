#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s = "abcabcbb";
    int left = 0;
    int right = 0;
    unordered_set<int> window;

    int maxlen = 0;

    for(right = 0;right<s.length();right++)
    {
        
        while(window.count(s[right]))
        {
            window.erase(s[left]);
            left++;
        }

        window.insert(s[right]);

        int len = right - left + 1;
        if(len > maxlen)
        maxlen = len;
    }

    cout<<"Max len is "<<maxlen<<endl;
    return 0;
}