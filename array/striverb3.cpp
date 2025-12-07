#include<bits/stdc++.h>
using namespace std;

bool check(int arr[],int n) {

    int temp = true;

    for(int i=0;i<n;i++) {
        
        int j = i+1;
        if(j > n)
        break;

        if(arr[i] <= arr[j])
        continue;
        else {
            temp = false;
        }
    }

    return temp;
}
int main() {

    int arr[] = {1,2,3,4,1,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    auto res = check(arr,n);
    cout<<boolalpha<<res<<endl;
}