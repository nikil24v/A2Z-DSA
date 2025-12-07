#include<iostream>
using namespace std;

class comp {

    int x,y;
    public:
    comp(): x(0),y(0) {}
    comp(int a,int b) : x(a),y(b) {}
    comp operator+(comp t) {
        comp temp;
        temp .x = this -> x + t.x;
        temp .y = this -> y + t.y;
        return temp;
    }

    void print() {
        cout<<x<<" "<<y<<endl;
    }
};
int main() {
    
    comp obj1(1,1);
    comp obj2(2,2);

    comp obj3;
    obj3 = obj1 + obj2; //obj1(obj2)
    obj3.print();
    return 0;
}