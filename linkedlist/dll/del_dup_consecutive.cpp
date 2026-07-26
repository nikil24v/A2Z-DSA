#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value)
    {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

// Create Doubly Linked List
Node* createDLL(int arr[], int n)
{
    if(n == 0) return nullptr;

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for(int i = 1; i < n; i++)
    {
        Node* newNode = new Node(arr[i]);

        temp->next = newNode;
        newNode->prev = temp;

        temp = newNode;
    }

    return head;
}

// Print Doubly Linked List
void print(Node* head)
{
    Node* temp = head;

    while(temp)
    {
        cout << temp->data;

        if(temp->next)
            cout << " <-> ";

        temp = temp->next;
    }

    cout << endl;
}

// Remove Duplicates
Node* removeDuplicates(Node* head)
{
    if(head == nullptr)
        return head;

    Node* temp = head;

    while(temp && temp->next)
    {
        if(temp->data == temp->next->data)
        {
            Node* delNode = temp->next;

            temp->next = delNode->next;

            if(delNode->next)
                delNode->next->prev = temp;

            delete delNode;
        }
        else
        {
            temp = temp->next;
        }
    }

    return head;
}

int main()
{
    int arr[] = {1,1,3,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node* head = createDLL(arr, n);

    cout << "Original DLL:\n";
    print(head);

    head = removeDuplicates(head);

    cout << "After Removing Duplicates:\n";
    print(head);

    return 0;
}