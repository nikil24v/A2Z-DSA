#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,3,1,3,1,1,1,0};
    int n = sizeof(arr) / sizeof(arr[0]);

    // for(int i=0;i<n;i++)
    // {
    //     bool found = false;
    //     for(int j=0;j<i;j++)
    //     {
    //         if(arr[i] == arr[j])
    //         {
    //             found = true;
    //             break;
    //         }
    //     }
        
    //     if(found) 
    //     continue;

    //     int count = 1;
    //     for(int k = i+1;k<n;k++)
    //     {
    //         if(arr[i] == arr[k])
    //         {
    //             count++;
    //         }
    //     }

    //     cout<<"Element : "<<arr[i]<<" is repeated "<<count<<" times"<<endl;
    // }

    int freq[n] = {0};

    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        if(freq[i] > 0)
        {
            cout<<"Element : "<<i<<" is repeated "<<freq[i]<<" times"<<endl;
        }
    }
}