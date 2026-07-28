#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;

    bool res = false;

    if(n > 0 && (n & (n-1)) == 0)
    res = true;

    cout<<res<<endl;
}