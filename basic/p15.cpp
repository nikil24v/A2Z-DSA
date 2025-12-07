#include<bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {5,4,3,2,1};
    sort(arr,arr+5);

    sort(arr,arr+5,greater<int>());

    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}