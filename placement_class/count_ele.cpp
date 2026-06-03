#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,3,1,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count = 0;
    int ele = 1;
    for(int i=0;i<n;i++)
    {
        if(ele == arr[i])
        count++;
    }

    cout<<count<<endl;
}