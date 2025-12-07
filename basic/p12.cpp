#include<iostream>
using namespace std;

class A {
    public:
    int x;

    A() :x(10) {
        cout<<"Defaul constructor"<<endl;
    } 
    A(int a) : x(a) {
        cout<<"Parametrized constructor"<<endl;
    }
    ~A() {
        cout<<"Destructor"<<endl;
    }

};
int main() {

    A obj(5);
    cout<<obj.x<<endl;
}