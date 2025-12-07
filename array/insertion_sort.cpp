#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[],int n) {

    for(int i=0;i<n;i++)
    {
        int j = i;

        while(j > 0 && arr[j-1] > arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
int main() {

    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertion(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}