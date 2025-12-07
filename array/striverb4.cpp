#include<bits/stdc++.h>
using namespace std;

int remove_dup(int arr[] , int n) {

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {

            if(arr[i] == arr[j])
            {
                int k = 0;
                for(k = j - 1;k<n;k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
            }
        }
    }

    return n;
}
int main() {

    int arr[] = {0,0,3,3,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    n = remove_dup(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}