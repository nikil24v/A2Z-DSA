#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {14,9,15,12,6,8,13};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}