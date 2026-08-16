#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<"Binary: "<<endl;
    for(int i=31;i>=0;i--) {
        cout<<(num>>i&1)<<" ";
    }
    cout<<endl;

    int msb = (num >> 31) & 1;
    int lsb = (num >> 0) & 1;

    cout<<"MSB = "<<msb<<endl;
    cout<<"LSB = "<<lsb<<endl;

    return 0;
}