#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high) {

    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j)
    {
        while(i<high && arr[i]<=pivot)
        {
            i++;
        }
        while(j>low && arr[j] > pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low >= high) {
        return;
    }

    int pivotIndex = partition(arr, low, high);
    quickSort(arr, low, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, high);
}
int main()
{
    vector<int> arr = {5,3,8,4,2,7,1,10};

    quickSort(arr, 0, arr.size() - 1);

    for (int value : arr) {
        cout << value << ' ';
    }
    cout << '\n';
}