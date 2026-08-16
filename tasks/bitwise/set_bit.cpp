#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<"Binary Representaion: "<<endl;
    for(int i=31;i>=0;i--)
    {
        int res = num >> i & 1;
        cout<<res<<" ";
    }
    cout<<endl;

    int bp;
    cout<<"Enter the bit positioon u want to set "<<endl;
    cin>>bp;

    num = num | (1<<bp);

    cout<<"Output: "<<endl;
    for(int i=31;i>=0;i--)
    {
        int res = num >> i & 1;
        cout<<res<<" ";
    }
    cout<<endl;
}