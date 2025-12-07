#include<iostream>
using namespace std;

void rev(int arr[],int i,int j) {

    if(i >= j)
    return;

    int temp = 0;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    rev(arr,i + 1,j -1);
}
int main() {

    int arr[5] = {1,2,3,4,5};
    int i = 0;
    int j = sizeof(arr) / sizeof(arr[0]) - 1;
    rev(arr,i,j);

    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}