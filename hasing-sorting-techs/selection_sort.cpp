#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {13,46,52,20,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<n-1;i++)
    {
        int mini = i;
        bool sort = false;

        for(int j=i;j<n;j++)
        {
            if(arr[j] < arr[mini])
            {
                mini = j;
                sort = true;
            }
            
        }

        if(sort) {
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
        }
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}