#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Apple";

    int sum = 0;
    for(int i=0;i<str.size();i++)
    {
        int num = (int)str[i];

        sum = sum + num;
    }

    cout<<sum<<endl;
}