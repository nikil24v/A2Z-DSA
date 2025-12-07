#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the limit"<<endl;
    cin>>n;

    char ch = 'A';
    for(int i=0;i<n;i++) {
        
        for(int s=0;s<n-i-1;s++)
        cout<<" ";

        int l = (2*i) + 1;
        for(int j=0;j<((2*i)+1);j++) {
            cout<<ch;

            if(j >= l/2) {
            ch--;
            continue;
            }
            ch++;
        }
        ch = 'A';
        for(int s=0;s<n-i-1;s++)
        cout<<" ";     
        
        cout<<endl;
    }
}