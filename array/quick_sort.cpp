#include<bits/stdc++.h>
using namespace std;

int qs(vector<int>&arr,int low ,int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while( i<j )
    {

        while(arr[i] <= pivot && i <= high)
        {
            i++;
        }

        while(arr[j] >= pivot && j>= low + 1)
        {
            j--;
        }

        if(i < j)
        swap(arr[i],arr[j]);
    }

    swap(arr[low],arr[j]);
    return j;
}
void quick(vector<int>&arr,int low,int high)
{
    if(low < high) {
        int pindex = qs(arr,low,high);
        quick(arr,low,pindex -1);
        quick(arr,pindex+1,high);
    }
}
int main() {

    vector<int> arr = {4,1,2,5,3};
    quick(arr,0,arr.size() - 1);

    for(auto it : arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}