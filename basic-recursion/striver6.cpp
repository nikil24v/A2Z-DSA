#include<bits/stdc++.h>
using namespace std;

bool pallindrome(string &s,int i,int j)
{
    if(i >= j)
    return true;
    
    if(s[i]!=s[j])
    return false;

    return pallindrome(s,i+1,j-1);
}
int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;

    int n = str.length();
    bool res = pallindrome(str,0,n-1);
    cout<<boolalpha<<res<<endl;
}