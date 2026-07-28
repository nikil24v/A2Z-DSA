#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    bool res = num & 1;

    if(res)
    cout<<"ODD"<<endl;
    else
    cout<<"EVEN"<<endl;

    return 0;
}