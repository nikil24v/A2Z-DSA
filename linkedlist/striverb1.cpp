#include<bits/stdc++.h>
using namespace std;

struct Node {
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
    Node*temp = head;

    while(temp)
    {
        cout<<temp -> val<<" ";
        temp = temp -> next;
    }
    cout<<endl;

}
int main() {

    int arr[] = {1,2,3,4,5};
    int  n = sizeof(arr)/sizeof(arr[0]);

    Node*head = createLL(arr,n);
    print(head);
    return 0;
}