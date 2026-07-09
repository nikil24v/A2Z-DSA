#include<bits/stdc++.h>
using namespace std;

class node {
    public: 
    int data;
    node*next;
};

node*createll(int arr[] , int n)
{
    node*head = new node();
    head -> data = arr[0];
    head -> next = nullptr;

    node*temp = head;

    for(int i=1;i<n;i++)
    {
        node*newnode = new node();
        newnode -> data = arr[i];
        newnode -> next = nullptr;

        temp -> next = newnode;
        temp = newnode;
    }

    return head;
}

void print(node*head)
{
    node*temp = head;

    while(temp)
    {
        cout<<temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

node*rev(node*head)
{
    node*prev = nullptr;
    node*curr = head;

    while(curr != nullptr)
    {
        node*nextnode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextnode;
    }

    return prev;
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    node*head = createll(arr,n);
    head = rev(head);
    print(head);
}