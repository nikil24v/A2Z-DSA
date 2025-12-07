#include<iostream>
#include<climits>
using namespace std;

int main() {

    int n;
    cout<<"Enter the limit"<<endl;
    cin>>n;


    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    int max = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > max)
        max = arr[i];
    }

    int hash[max + 1] = {0};
    for(int i=0;i<n;i++)
    hash[arr[i]] += 1;

    for(int i=0;i<=max;i++)
    {
        if(hash[i] > 0)
        cout<<i<<" is repeated "<<hash[i]<<endl;
    }
}