#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "one two three";

    reverse(str.begin(),str.end());
    int start = 0;
    for(int i=0; i<=str.size(); i++)
    {
        // If space found or end of string, reverse the word
        if(i == str.size() || str[i] == ' ')
        {
            reverse(str.begin()+start, str.begin()+i);
            start = i + 1;  // Move to next word
        }
    }
    cout<<str<<endl;
    return 0;
}