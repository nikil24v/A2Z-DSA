#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,3,5,7,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxi = INT_MIN;
    int maxi2 = INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i] > maxi)
        {
            maxi2 = maxi;
            maxi = arr[i];
        }
        else if(arr[i] > maxi2)
        {
            maxi2 = arr[i];
        }
    }

    cout<<maxi2<<endl;
}