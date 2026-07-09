#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node*next;
};

node*createll(int arr[],int n) {

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

node*find_mid(node*head) {

    node*slow = head;
    node*fast = head;

    while(fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    return slow;
}

void print(node*head)
{
    node*temp = head;

    while (temp)
    {
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    node*head = createll(arr,n);
    node*mid = find_mid(head);
    print(mid);
}