#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node*next;
};

Node*createll(int arr[],int n)
{
    Node*head = new Node();
    head -> data = arr[0];
    head -> next = NULL;

    Node*temp = head;
    for(int i = 1; i < n; i++)
    {
        Node*newNode = new Node();
        newNode -> data = arr[i];
        newNode -> next = NULL;
        temp -> next = newNode;
        temp = newNode;
    }
    
    return head;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node*temp = createll(arr,n);
    
    while(temp)
    {
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}