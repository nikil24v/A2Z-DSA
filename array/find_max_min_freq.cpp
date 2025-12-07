#include<bits/stdc++.h>
using namespace std;

void countfreq(int arr[],int n) {

    vector<bool> vis (n,false);
    int maxfreq = INT_MIN;int maxele = 0;
    int minfreq = INT_MAX;int minele = 0;

    for(int i=0;i<n;i++) {

        if(vis[i] == true)
        {
            continue;
        }

        int count = 1;
        for(int j=i+1;j<n;j++) {
            if(arr[i] == arr[j]) {
                count++;
                vis[j] = true;
            }
        }

        if(count > maxfreq) {
        maxfreq = count;
        maxele = arr[i];
        }

        if(count < minfreq)
        {
            minfreq = count;
            minele = arr[i];
        }

    }

    cout<<"Max element is "<<maxele<<"->"<<maxfreq<<endl;
    cout<<"Min element is "<<minele<<"->"<<minfreq<<endl;
}
int main() {

    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countfreq(arr,n);
}