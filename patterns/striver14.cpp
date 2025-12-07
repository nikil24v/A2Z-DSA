#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    char ch = 'A';
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<i+1;j++) {
        cout<<ch<<" ";
        ch++;
        }   

        ch = 'A';
        cout<<endl;
    }
}