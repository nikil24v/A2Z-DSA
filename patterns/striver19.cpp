#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the limit"<<endl;
    cin>>n;

    int sp = 0;
    for(int i=0;i<n;i++) {
        
       for(int j=0;j<n-i;j++)
       cout<<"*";

       for(int s=0;s<sp;s++)
       cout<<" ";

       for(int j=0;j<n-i;j++)
       cout<<"*";

       sp = sp + 2;
       cout<<endl;
    }

    sp = sp - 2;
    for(int i=0;i<n;i++) {

        for(int j=0;j<i+1;j++)
        cout<<"*";

        for(int s = 0;s<sp;s++)
        cout<<" ";

        for(int j=0;j<i+1;j++)
        cout<<"*";

        sp = sp - 2;
        cout<<endl;
    }

    return 0;
}