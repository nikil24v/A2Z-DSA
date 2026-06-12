#include<bits/stdc++.h>
using namespace std;

typedef struct Node
{
    int data;
    Node*next;
}node;

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

int main()
{
    int arr[] = {1,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    node*temp= createll(arr,n);

    int count = 0;

    while(temp)
    {
        count++;
        temp = temp -> next;
    }

    cout<<"The total no.of nodes are "<<count<<endl;
    return 0;
}