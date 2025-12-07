#include<bits/stdc++.h>
using namespace std;

int main() {

    // pair<int,int> p;
    // p = {1,2};

    // cout<<p.first<<" "<<p.second<<endl;

    int n;
    cout<<"Enter the limit"<<endl;
    cin>>n;
    pair<int,int> arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }

    for(int i=0;i<n;i++)
    cout<<arr[i].first<<" "<<arr[i].second<<" ";
    cout<<endl;
    return 0;
}