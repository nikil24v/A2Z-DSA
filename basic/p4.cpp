#include<iostream>
using namespace std;

int main() {
    char *p = new char[20];
    cout<<"Enter the name"<<endl;
    cin>>p;

    cout<<p<<endl;
    delete []p;
}