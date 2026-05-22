#include<bits/stdc++.h>
using namespace std;

int main()
{
    string num = "35427";
    
    for(int i=num.size()-1;i>=0;i--)
    {
        int digit = num[i] - '0';

        if(digit %2 != 0)
        {
            cout<<num.substr(0,i+1)<<endl;
            return 0;
        }
    }

}