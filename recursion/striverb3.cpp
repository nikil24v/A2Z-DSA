#include<iostream>
using namespace std;

void print(int s,int e) {
    cout<<s<<endl;
    s = s + 1;
    print(s,e);

    if(s >= e)
    return;
}
int main() {

    int n;
    cout<<"Enter the limit"<<endl;
    cin>>n;

    print(1,n);
}