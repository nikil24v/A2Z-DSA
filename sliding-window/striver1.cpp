#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abcabcbb";

    int left = 0;
    int right = 0;
    int maxlen = 0;
    unordered_set<int> window;

    for(right = 0;right<s.length();right++)
    {
        while(window.count(s[right]))
        {
            window.erase(s[left]);
            left++;
        }

        window.insert(s[right]);

        int len = right - left + 1;
        maxlen = max(maxlen,len);
    }
    cout<<"MAX len is "<<maxlen<<endl;
}