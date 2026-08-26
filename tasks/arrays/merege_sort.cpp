#include<bits/stdc++.h>
using namespace std;

void merege_sort(vector<int>& arr,int start,int end,int mid) {

    int i = start;
    int j = mid + 1;
    vector<int> c;

    while(i<=mid && j<=end)
    {
        if(arr[i] < arr[j])
        {
            c.push_back(arr[i]);
            i++;
        }
        else
        {
            c.push_back(arr[j]);
            j++;
        }
    }

    while(i <=mid)
    c.push_back(arr[i++]);

    while(j<=end)
    c.push_back(arr[j++]);

    for(int i=0;i<c.size();i++)
    {
        arr[start+ i] = c[i];
    }
}

void merge(vector<int>& arr,int start,int end) {

    if(start >= end)
    return;

    int mid = ( start + end ) / 2;
    merge(arr,start,mid);
    merge(arr,mid+1,end);
    merege_sort(arr,start,end,mid);
}

int main() 
{
    vector<int> arr = {1,3,7,9,1,2,5,6};
    int mid = (arr.size() / 2) -  1;
    merge(arr,0,arr.size()-1);
    for(auto it: arr)
    cout<<it<<" ";
    cout<<endl;
}