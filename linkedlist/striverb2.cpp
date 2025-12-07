#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node*next;
};

Node* createLL(int arr[],int n)
{
    Node*head = NULL;
    Node*temp = NULL;

    for(int i=0;i<n;i++)
    {
        Node*newnode = new Node;
        newnode -> val = arr[i];
        newnode -> next = NULL;

        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp -> next = newnode;
            temp = newnode;
        }
    }

    return head;
}

void print(Node*head)
{
    while(head)
    {
        cout<<head->val<<" ";
        head = head -> next;
    }
    cout<<endl;
}

Node* del(Node**head,int x)
{
    
}

int main() {

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node*head = createLL(arr,n);
    
    int x;
    cout<<"Enter the elemnt u want to delete"<<endl;
    cin>>x;

    del(&head,x);

    print(head);
    return 0;
}