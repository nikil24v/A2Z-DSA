#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<"Before reverse: "<<endl;
    for(int i=31;i>=0;i--) {
    cout<<(num>>i&1)<<" ";
    }
    cout<<endl;

    int i = 31;
    int j = 0;

    for(;i>j;i--,j++)
    {
        int x = num >> i & 1;
        int y = num >> j & 1;

        if(x!=y)
        {
            num = num ^ (1<<i);
            num = num ^ (1<<j);
        }
    }

    cout<<"After Reverse: "<<endl;
    for(int i=31;i>=0;i--) {
    cout<<(num>>i&1)<<" ";
    }
    cout<<endl;
    
}