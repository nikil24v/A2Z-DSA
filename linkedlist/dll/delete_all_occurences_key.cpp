#include<bits/stdc++.h>
using namespace std;

class node {
    
    public:
    int data;
    node*next;
    node*prev;

    node(int data)
    {
        this -> data = data;
        this -> next = nullptr;
        this -> prev = nullptr;
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

node*del(node*head,int key)
{
   node*temp = head;

   while(temp)
    {
        node*nextnode = temp -> next;

        if(temp -> data == key)
        {
            if(temp-> prev)
            temp -> prev -> next = temp -> next;
            else
            head = temp -> next;

            if(temp->next)
            temp -> next -> prev = temp -> prev;

            delete temp;
        }
        temp = nextnode;
    }
    return head;
}

int main()
{
    int arr[] = {1,2,3,1,4};
    int key = 1;

    int n = sizeof(arr) / sizeof(arr[0]);

    node*head = createll(arr,n);
    head = del(head,key);
    print(head);
}