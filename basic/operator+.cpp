#include<iostream>
using namespace std;

class test 
{

    int x,y;

    public:

    test() : x(0),y(0) {}
    test(int a,int b) : x(a),y(b) {}

    test operator+(const test& obj)
    {
        test temp;
        temp.x = x + obj.x;
        temp.y = y + obj.y;

        cout<<"Operator + Overload funtion"<<endl;
        return temp;
    }

    void print() {
        cout<<x<<" "<<y<<endl;
        return;
    }
};
int main() {

    test obj1(1,2);

    test obj2(1,2);

    test obj3 = obj1.operator+(obj2);
    obj3.print();
    return 0;
}