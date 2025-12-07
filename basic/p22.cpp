#include<iostream>
using namespace std;

int main() {

    int x = 100;
    int &ref = x;

    ref = 200;

    cout<<x<<endl;

    return 0;
}