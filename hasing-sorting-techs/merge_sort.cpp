#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }

        while(left <= mid)
        {
            temp.push_back(left);
            left++;
        }

        while(right <= high)
        {
            temp.push_back(right);
            right++;
        }

        int i = 0;
        for(auto it: temp)
        {
            arr[i] = it;
            i++;
        }
    }
}
void mergesort(int arr[],int low,int high)
{
    if(low >= high)
    return;

    int mid = (low + high) / 2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main()
{
    int arr[] = {3,2,4,1,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int low = 0;
    int high = n - 1;
    mergesort(arr,low,high);

    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}