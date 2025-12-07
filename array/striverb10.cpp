#include<bits/stdc++.h>
using namespace std;

int find_ele(int arr[],int n) {

    for(int i=0;i<n;i++) {
        int min = i;
        bool didswap = false;
        for(int j=i+1;j<n;j++) {

            if(arr[j] < arr[min])
            {
                didswap = true;
                min = j;
            }
        }

        if(didswap) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    int temp = arr[0];
    for(int i=0;i<n;i++)
    {
        if(temp != arr[i])
        break;

        temp++;
    }

    if(temp == n)
    return -1;

    return temp;

}
int main() {

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int res = find_ele(arr,n);
    cout<<res<<endl;
}