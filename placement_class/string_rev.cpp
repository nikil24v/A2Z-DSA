#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Apple";

    int i=0;
    int j = str.size() - 1;
    for(;i<j;i++,j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    cout<<str<<endl;
    return 0;
}