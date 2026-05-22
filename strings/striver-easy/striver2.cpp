#include<bits/stdc++.h>
using namespace std;

int main()  //Reverse the string 
{
    string s = "the sky is   blue  ";

    if(s.empty() == true)
    {
        cout<<"The String is empty"<<endl;
        return 0;
    }
    else
    {
        while(s.front() == ' ')
        {
            s.erase(0,1);
        }

        while(!s.empty() && s.back() == ' ')
        {
            s.pop_back();
        }

        for(int i=0;i<s.length();i++)
        {
            if(s[i] == ' ' && s[i+1] == ' ')
            {
                s.erase(i,1);
                i--;
            }
        }
    }

    cout<<s<<endl;
    reverse(s.begin(),s.end());

    int start = 0;

    for(int i=0;i<=(int)s.length();i++)
    {
        if(i == s.length() || s[i] == ' ')
        {
            reverse(s.begin() + start , s.begin() + i);
            start = i+1;
        }
    }
    cout<<s<<endl;
}