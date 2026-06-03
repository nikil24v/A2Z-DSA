#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,-2,3,-4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    //int pos[n];
    for(int i=0;i<n;i++)
    {
       if(arr[i] > 0)
       {
        cout<<arr[i]<<" ";
       }
    }
    cout<<endl;
}