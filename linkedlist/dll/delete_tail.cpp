#include<bits/stdc++.h>
using namespace std;

class node {

    public:
    int data;
    node*next;
    node*prev;

    node(int value)
    {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

node*createll(int arr[],int n)
{

    node*head = new node(arr[0]);
    node*temp = head;
    for(int i=1;i<n;i++)
    {
        node*newnode = new node(arr[i]);

        newnode -> prev = temp;
        temp -> next = newnode;

        temp = newnode;
    }
    return head;
}

void print(node*temp)
{
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

node*delete_tail(node*head)
{

    node*temp = head;

    if(head -> next == nullptr)
    {
        delete head;
        return nullptr;
    }

    while(temp -> next != nullptr)
    temp = temp -> next;

    temp -> prev -> next = nullptr;
    delete temp;

    return head;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    node*temp = createll(arr,n);
    
    node*head = delete_tail(temp);
    print(head);
}