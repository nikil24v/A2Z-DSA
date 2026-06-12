#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node*next;
};

node*createll(int arr[],int n)
{
    node*head = new node();
    head -> data = arr[0];
    head -> next = NULL;

    node*temp = head;

    for(int i=1;i<n;i++)
    {
        node*newnode = new node();
        newnode -> data = arr[i];
        newnode -> next = NULL;
        temp -> next = newnode;
        temp = newnode;
    }

    return head;
}

void delete_node(node*&head,int data)
{
 
    if(head -> data == data)
    {
        node*temp = head;
        head = head -> next;
        delete temp;
        return;
    }

    node*curr = head;

    while(curr->next != NULL)
    {
        if(curr -> next -> data == data)
        {
            node * temp = curr -> next;
            curr -> next = temp -> next;
            delete temp;
            return;
        }

        curr = curr -> next;
    }
}

int main()
{
    int arr[] = {4,5,1,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    node*newnode = createll(arr,n);

    delete_node(newnode,1);
    while(newnode)
    {
        cout<<newnode -> data<<" ";
        newnode = newnode -> next;
    }
    cout<<endl;
}