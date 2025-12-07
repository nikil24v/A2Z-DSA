#include<iostream>
using namespace std;

void print(int n,string str) {

    if(n == 0)
    return;

    cout<<str<<endl;

    print(n - 1,str);
}
int main() {

    int n;
    cout<<"Enter the limit"<<endl;
    cin>>n;
    cin.ignore();//flsuh the input buffer '/n' cleared.
    
    string name;
    getline(cin,name);

    print(n,name);
}