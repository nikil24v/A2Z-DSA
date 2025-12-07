#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the limit"<<endl;
    cin>>n;

    char ch = 'A';
    for(int i=0;i<n;i++) {

        for(int j=0;j<n-i;j++) {
            cout<<ch<<" ";
            ch++;
        }

        ch = 'A';
        cout<<endl;
    }
    return 0;
}