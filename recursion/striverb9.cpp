#include<iostream>
using namespace std;

void fib(int a,int b,int x) {

    if(x>100)
    return;
    
    x = a + b;
    cout<<x<<endl;
    a = b;
    b = x;

    return fib(a,b,x);
}
int main() {

    int a = 0,b = 1;
    cout<<a<<endl;
    cout<<b<<endl;
    fib(a,b,0);
}