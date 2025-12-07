#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the limit"<<endl;
    cin>>n;

    for(int i=0;i<n;i++) {

        for(int s=0;s<i;s++)
        cout<<" ";

        for(int j=0;j<(2*n - (2*i + 1));j++)
        cout<<"*";

        for(int s=0;s<i;s++)
        cout<<" ";

        cout<<endl;
    }
    return 0;
}