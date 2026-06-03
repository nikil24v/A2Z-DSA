#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int a[n] = {1,6,3,7,8};
    int b[n] = {2,5,9,12,4};
    
    int c[2*n];

    int i = 0;

    for(;i<n;i++)
    {
        c[i] = a[i];
    }

    for(int j=0;j<n;j++)
    {
        c[i+j] = b[j];
    }

    for(int j=0;j<2*n;j++)
    {
        cout<<c[j]<<" ";
    }
    cout<<endl;

    for()
}