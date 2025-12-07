#include<iostream>
using namespace std;


int main() {

    int n;
    cout<<"Enter the limit"<<endl;
    cin>>n;

    int num = 4;
    for(int i=0;i<n;i++) {

        for(int j=0;j<n;j++)
        {
            if(i == 0 || j == 0 || i == n-1 || j == n-1)
            cout<<num;
            else if(i == 1 || j == 1 || i == n-2 || j == n-2)
            cout<<num -1;
            else if(i == 2 || j == 2 || i == n-3 || j == n-3)
            cout<<num -2;
            else
            cout<<num - 3;
        }
        cout<<endl;
    }
}