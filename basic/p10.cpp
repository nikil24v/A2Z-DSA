#include<iostream>
using namespace std;

template <typename T>
T add(T a,T b) {
    return a+b;
}

int main() {

    // res = add(1,2);
    auto res = add(1.1f,1.2f);
    cout<<res<<endl;
}