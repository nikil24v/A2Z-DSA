#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the limit"<<endl;
    cin>>n;

    int sp = (2*n) - 2;

    for(int i=0;i<n*2;i++) {

        int st = i;
        if(i >= n) {
        st =  ((2*n) - 1 ) - i;
        st--;
        } 

        for(int j=0;j<st + 1;j++)
        cout<<"*";

        for(int s=0;s<sp;s++)
        cout<<" ";

        for(int j=0;j<st + 1;j++)
        cout<<"*";

        if(i <=n -2)
        sp = sp -2;
        else
        sp = sp + 2;
        cout<<endl;
    }
}