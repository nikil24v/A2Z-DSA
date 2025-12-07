#include<iostream>
using namespace std;

class rectangle {

    public:
    
    int area(int a,int b = 5) {
        return a*b;
    }
};
int main() {
    
    rectangle r;
    auto res = r.area(1);
    cout<<res<<endl;

}