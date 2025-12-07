#include<iostream>
using namespace std;

class base
{
    public: 
    int x;

    virtual void show()  {
        cout<<"base"<<endl;
    }
};

class derived : public base
{
    public:
    int y;

    void show() override {
        cout<<"derived"<<endl;
    }

    void print()
    {
        cout<<x<<" "<<y<<endl;
        return;
    }
};

int main() {

    // derived obj;
    // obj.x = 10;
    // obj.y = 20;

    // obj.print();
    // obj.show();

    base*ptr = new derived;
    ptr -> show();
    return 0;
}