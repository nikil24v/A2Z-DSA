#include<bits/stdc++.h>
#define MAX 5
using namespace std;

class Stack {

    int data[5];
    int top = -1;

    public:
        
        Stack()
        {
            top = -1;
        }

        void push(int value)
        {
            if(top == MAX - 1)
            {
                cout<<"The satck is full"<<endl;
                return;
            }


            data[++top] = value;
        }

        void pop()
        {
            if(top == -1)
            {
                cout<<"Stack is underflow"<<endl;
                return;
            }

            top--;
        }

        int peek()
        {
            if(top == -1)
            {
                cout<<"Stack is underflow"<<endl;
                return 0;
            }

            return data[top];
        }

        void display()
        {
            for(int i=top;i>=0;i--)
            {
                cout<<data[i]<<" ";
            }
            cout<<endl;
        }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.pop();

    int res = s.peek();
    s.display();

    cout<<endl;
    cout<<res<<endl;
}