#include<bits/stdc++.h>
using namespace std;

class node {
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

node*insert_head(node**head)
{
    node*temp = new node();
    temp -> data = 5;
    temp -> next = *head;
    
    *head = temp;
    return *head;
}

int main()
{
    int arr[] = {0,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    node * temp = createll(arr,n);

    node*temp2 = insert_head(&temp);

    while(temp2)
    {
        cout<<temp2 -> data <<" ";
        temp2 = temp2 -> next;
    }
    cout<<endl;
}