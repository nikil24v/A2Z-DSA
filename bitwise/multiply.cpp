#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the numbers: ";
    cin>>a>>b;

    int ans = 0;
    while(b > 0)
    {
        if(b & 1)
        ans += a;

        a = a << 1;
        b = b >> 1;
    }

    cout<<"The ans is "<<ans<<endl;

    return 0;
}