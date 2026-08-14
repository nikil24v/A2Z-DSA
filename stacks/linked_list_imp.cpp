#include <bits/stdc++.h>
using namespace std;

class Node
{
public:

    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class Stack
{
    Node* top;

public:

    Stack()
    {
        top = nullptr;
    }

    void push(int value)
    {
        Node* newNode = new Node(value);

        newNode->next = top;

        top = newNode;
    }

    void pop()
    {
        if(top == nullptr)
        {
            cout << "Stack Underflow" << endl;
            return;
        }

        Node* temp = top;

        top = top->next;

        delete temp;
    }

    int peek()
    {
        if(top == nullptr)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }

        return top->data;
    }

    void display()
    {
        Node* temp = top;

        while(temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Top: " << s.peek() << endl;

    s.pop();

    s.display();

    cout << "Top: " << s.peek() << endl;
}