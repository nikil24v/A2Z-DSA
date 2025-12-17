#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[] = {1,2,3,4,5};
    // int n = sizeof(arr) / sizeof(arr[0]);

    // int max1 = arr[0];
    // int max2 = arr[0];

    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i] > max1)
    //     max1 = arr[i];
    // }

    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i] > max2 && arr[i] != max1)
    //     max2 = arr[i];
    // }

    // cout<<max2<<endl;

    vector<int> arr = {13,24,46,53,9};
    sort(arr.begin(),arr.end());
    int n = arr.size();
    int largest = arr[n-1];
    

    int max2 = 0;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i] != largest)
        {
            max2 = arr[i];
            break;
        }
    }

    cout<<max2<<endl;

}