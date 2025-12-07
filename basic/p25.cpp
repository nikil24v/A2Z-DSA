#include<iostream>
using namespace std;

int *ret(int val)
{
    int *p = &val;

    return p;
}

int main() {

    int *p = ret(5);
    cout<< *p << endl;
    return 0;
}