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

class Queue
{
    Node* front;
    Node* rear;

public:

    Queue()
    {
        front = nullptr;
        rear = nullptr;
    }

    void enqueue(int value)
    {
        Node* newNode = new Node(value);

        if(front == nullptr)
        {
            front = newNode;
            rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = newNode;
    }

    void dequeue()
    {
        if(front == nullptr)
        {
            cout << "Queue Underflow" << endl;
            return;
        }

        Node* temp = front;

        front = front->next;

        delete temp;

        if(front == nullptr)
        {
            rear = nullptr;
        }
    }

    int peek()
    {
        if(front == nullptr)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return front->data;
    }

    void display()
    {
        Node* temp = front;

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
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    cout << "Front: " << q.peek() << endl;

    q.dequeue();

    q.display();

    cout << "Front: " << q.peek() << endl;
}