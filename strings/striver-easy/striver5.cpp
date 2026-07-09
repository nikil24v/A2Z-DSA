#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "egg";
    string t = "add";

    unordered_map<char,char> mp1;
    unordered_map<char,char> mp2;

    for(int i=0;i<s.size();i++)
    {
        char c1 = s[i];
        char c2 = t[i];

        if(mp1.count(c1) && mp1[c1]!=c2)
        {
            cout<<"Not Isomorphic";
            return 0;
        }

        if(mp2.count(c2) && mp2[c2]!=c1)
        {
            cout<<"Not Isomorphic";
            return 0;
        }

        mp1[c1] = c2;
        mp2[c2] = c1;
    }

    cout<<"Isomorphic"<<endl;
}