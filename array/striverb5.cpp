#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[],int n) {

    int val = arr[0];
    int i = 0;
    for(i=0;i<n-1;i++) {

        arr[i] = arr[i + 1];
    }

    arr[i] = val;
}
int main() {

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    rotate(arr,n);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}