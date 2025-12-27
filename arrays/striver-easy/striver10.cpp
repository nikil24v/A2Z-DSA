#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
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

        if(sort)
        {
            swap(arr[mini],arr[i]);
        }
    }
}

int main()
{
    int arr[] = {0, 2, 3, 1, 4};
    int temp = 0;

    int n = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr,n);

    // for(int i=0;i<n;i++)
    // cout<<arr[i]<<" ";
    // cout<<endl;
    // return 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != temp)
        break;

        temp++;
    }

    cout<<"The missing Element is "<<temp<<endl;
}