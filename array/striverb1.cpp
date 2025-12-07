#include<bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {1,2,10,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int large = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > large)
        large = arr[i];
    }

    cout<<"Largest element in the array is "<<large<<endl;
    return 0;
}