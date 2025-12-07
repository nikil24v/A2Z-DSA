#include<bits/stdc++.h>
using namespace std;

int main() {

    char **p = new char*[5];

    for(int i=0;i<5;i++)
    {
        p[i] = new char[5];
    }

    if(p == nullptr)
    {
        cerr<<"Memory allocation failed"<<endl;
        return 0;
    }

    cout<<"Enter the Strings"<<endl;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        cin>>p[i][j];
    }

    cout<<endl;
    cout<<"Strings are .."<<endl;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<5;i++)
    delete []p[i];

    delete []p;
    return 0;
}