#include<iostream>
using namespace std;


int main() {

    try {
        int x = 0;

        if(x == 0)
        throw "its zero";
    }

    catch(const char*msg)
    {
        cout<<msg<<endl;
    }

    return 0;

}