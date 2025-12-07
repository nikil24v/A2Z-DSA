#include<iostream>
using namespace std;

int main() {

    while(1) {
        char op;
        cout<<"Enter the operation"<<endl;
        cin>>op;

        int a,b;
        cout<<"Enter the numbers"<<endl;
        cin>>a>>b;
        
        switch(op) {
            case '+':
            cout<<a+b<<endl;
            break;

            case '-':
            if(a>b)
            cout<<a-b<<endl;
            else
            cout<<b-a<<endl;
            break;

            case '*':
            cout<<a*b<<endl;
            break;

            case '/':
            cout<<a/b<<endl;
            break;
            
        }
    }
}