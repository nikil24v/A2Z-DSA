#include<bits/stdc++.h>
using namespace std;

class Box
{
    public:
    int len,brth;

    public:
    Box() : len(5),brth(5)
    {
        cout<<"Default Construtor"<<endl;
    }

    Box(int a,int b) : len(a),brth(b) 
    {
        cout<<"Parametrized Constructor"<<endl;
    }
    
    Box(const Box& other)
    {
        len = other.len;
        brth = other.brth;

        cout<<"Copy COnstructor"<<endl;
    }
    
    ~Box() {

        cout<<"Destructor"<<endl;
    }
};

int main() {


    Box obj(3,4);

    Box obj1 = obj;

    cout<<obj1.len<<" "<<obj1.brth<<endl;

    return 0;
}