#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int count = 0;

    for(int i=31;i>=0;i--)
    {
        if(num>>i & 1)
        count++;
    }

    cout<<"The no.of set bits are "<<count<<endl;
}