#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,0,7,0,3,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    // int original_n = n;

    // int count = 0;

    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i] == 0)
    //     {
    //         for(int j = i;j<n-1;j++)
    //         {
    //             arr[j] = arr[j+1];
    //         }
    //         n--;
    //         i--;
    //         count++;
    //     }
    // }

    // for(int i = n; i < original_n; i++)
    // {
    //     arr[i] = 0;
    // }
    
    // for(int i=0;i<original_n;i++)
    // cout<<arr[i]<<" ";
    // cout<<endl;

    // int arr[] = {1,0,7,0,3,0};
                    
    int slow = 0;

    for(int fast = 0;fast < n;fast++)
    {
        if(arr[fast] != 0)
        {
            swap(arr[slow],arr[fast]);
            slow++;
        }
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}