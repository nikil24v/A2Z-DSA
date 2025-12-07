#include<iostream>
using namespace std;

class box {

    public:
    int length;
    int bredth;

    box():length(0),bredth(0) {}
    box(int a,int b) : length(a),bredth(b)
    {
        cout<<"Parametrized Constructor"<<endl;
    } 

    box operator+(box &other)
    {
       box temp;
       temp.length = length + other.length;
       temp.bredth = bredth + other.bredth;

       return temp;
    }

    void print()
    {
        cout<<length<<" "<<bredth<<endl;
    }
};

int main() {

    box b1(1,2);
    box b2(1,2);

    box b3 = b1 + b2;
    b3.print();
    return 0;
}