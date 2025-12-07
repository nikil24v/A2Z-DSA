#include<iostream>
using namespace std;

int main() {

    int num1,num2;
    cout<<"Enter the number."<<endl;
    cin>>num1>>num2;
    int res = 0;
    try {

        if(num2 == 0)
        throw 0;

        res = num1 / num2;
    }

    catch(int e)
    {
        cout<<"Divided by 0"<<endl;
        return 0;
    }

    cout<<res<<endl;
}