#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 0;

    for(int i=0;i<n;i++)
    {
        x = x ^ arr[i];
    }

    cout<<"The element that appeared once is "<<x<<endl;
    return 0;
}