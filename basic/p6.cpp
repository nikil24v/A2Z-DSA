#include<iostream>
using namespace std;

inline void add(int a,int b)
{
    cout<<a+b<<endl;
}
int main() {
    int a = 10;
    int b = 10;

    add(a,b);
}