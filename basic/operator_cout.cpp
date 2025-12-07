#include<iostream>
using namespace std;

class test {

    private:
    int x,y;

    public:
    test() : x(0),y(0) {}
    test(int a,int b) : x(a),y(b) {}
    
    friend ostream& operator<<(ostream& out,const test& t)
    {
        out<<t.x<<" "<<t.y<<endl;
        return out;
    }
};
int main() 
{
    test obj(1,2);
    cout<<obj<<endl;
    return 0;

}