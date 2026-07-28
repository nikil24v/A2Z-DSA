#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the numbers: ";
    cin>>a>>b;

    while(b!=0)
    {
        int carry = (a & b) << 1;
        a = a ^ b;
        b = carry;
    }

    cout<<a<<endl;
}