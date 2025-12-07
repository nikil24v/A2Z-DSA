#include<bits/stdc++.h>
using namespace std;


int main() {

    string s = "icecream";
    string vowels = "aeiou";

    int i = 0;
    int j = s.length() - 1;

    while(i<j)
    {
       if(vowels.find(s[i]) == string::npos)
       {
            i++;
            continue;
       }

       if(vowels.find(s[j]) == string::npos)
       {
            j--;
            continue;
       }

       swap(s[i],s[j]);
        i++;
        j--;


    }

    cout<<s<<endl;
}