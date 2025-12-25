#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {0,1,0,3,12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int indx = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[indx++] = arr[i];
        }
    }

    while(indx < n)
    {
        arr[indx++] = 0;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}