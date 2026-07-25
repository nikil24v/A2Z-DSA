#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node*next;

    node(int data1) : data(data1) , next(nullptr) {}
    node(int data,node*next) {
        this -> data = data;
        this -> next = next;
    }
};


void print(node*head)
{
    node*temp = head;

    while(temp)
    {
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void find_head(node*head) {

    node*slow = head;
    node*fast = head;

    while(fast && fast -> next != nullptr)
    {
        slow = slow -> next;
        fast = fast -> next -> next;

        if(slow == fast)
        {
            cout<<slow -> data<<endl;
            return;
        }
        
    }


}
int main()
{
    node*head = new node(3);
    node*first = new node(2);
    node*second = new node(0);
    node*third = new node(4);

    head -> next = first;
    first -> next = second;
    second -> next = third;
    third -> next = first;

    find_head(head);
    //print(head);
}