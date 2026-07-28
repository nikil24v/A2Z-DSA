#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the number: ";
    cin>>a>>b;

    int res = a + (~b + 1);
    cout<<res<<endl;

    return 0;
}