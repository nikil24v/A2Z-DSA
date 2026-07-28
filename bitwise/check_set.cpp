#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;

    int bp;
    cout<<"Enter the bit pos u want to check: ";
    cin>>bp;

    bool res = num & (1<<bp);

    if(res)
    cout<<"Set"<<endl;
    else
    cout<<"Clear"<<endl;

    return 0;
}