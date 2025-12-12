#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int hash[100] = {0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]] += 1;
    }

    for(int i=0;i<100;i++)
    {
        if(hash[i] > 0)
        {
            cout<<i<<" has appeared "<<hash[i]<<" times"<<endl;
        }
    }
}