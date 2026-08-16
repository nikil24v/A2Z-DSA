#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num = 3;

    cout<<"Before: "<<endl;
    for(int i=31;i>=0;i--) {
        cout<<(num>>i&1)<<" ";
    }
    cout<<endl;

    num = num & ~(1 << 0);   

    cout<<"After clearing LSB: "<<endl;
    for(int i=31;i>=0;i--) {
        cout<<(num>>i&1)<<" ";
    }
    cout<<endl;


    return 0;
}