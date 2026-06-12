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

bool search(node*&head,int val)
{
    node*temp = head;

    while(temp)
    {
        if(temp -> data == val)
        return true;

        temp = temp -> next;
    }

    return false;
}

int main()
{
    int arr[] = {0,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    node*temp = createll(arr,n);
    int val = 3;
    bool res = search(temp,val);
    cout<<boolalpha<<res<<endl;
}