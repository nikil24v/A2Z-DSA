#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the number: ";
    int num;
    cin>>num;

    for(int i=31;i>=0;i--) {
    cout<<(num>>i&1)<<" ";
    }
    cout<<endl;

    return 0;
}