#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,3,2,2,1};
    // 1 1 2 2 3 
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int maxi = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > maxi)
        maxi = arr[i];
    }

    int freq[maxi + 1];

    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }

    for(int i=0;i<maxi+1;i++)
    {
        if(freq[i]!=0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}