#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,3,4,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);


    int i = 0;
    int j = n - 1;

    for(;i<j;i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    cout<<endl;
}