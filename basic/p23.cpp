#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}

int main() {

    int (*fp)(int,int);
    
    fp = add;
    int res = fp(1,2);
    cout<<res<<endl;
    return 0;
}