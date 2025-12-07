#include<bits/stdc++.h>
using namespace std;

class A
{
    private:
    int x;
    int y;

    public:
    A() :x(10),y(20)
    {
        cout<<"Default Constructor"<<endl;
    } 

    A(int a,int b = 5) : x(a),y(b)
    {
        cout<<"Parameterzied Constructor"<<endl;
    }

    ~A()
    {
        cout<<"Destructor"<<endl;
    }
};

int main() {

    //A obj;
    A obj1(30);
    return 0;

}