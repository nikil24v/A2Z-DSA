#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node*next;
    node*prev;

    node(int value) : data(value),next(nullptr),prev(nullptr) {}
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

vector<pair<int,int>> find_pairs(node*head,int target)
{
    vector<pair<int,int>> v;

    node*left = head;
    node*right = head;

    while(right->next)
    right = right -> next;

    while(left != right && left -> prev != right)
    {
        int sum = left -> data + right -> data;

        if(sum == target)
        {
            v.push_back({left -> data,right -> data});

            left = left -> next;
            right = right -> prev;
        }
        else if(sum < target)
        {
            left = left -> next;
        }
        else
        {
            right = right -> prev;
        }
    }
    return v;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;   

    node*head = createll(arr,n);
    vector<pair<int,int>> ans = find_pairs(head, target);

    for(auto it: ans)
    {
        cout<<it.first<<","<<it.second<<endl;
    }
    cout<<endl;

    // node*temp = head;
    // while(temp)
    // {
    //     cout<<temp -> data<<" ";
    //     temp = temp -> next;
    // }
    // cout<<endl;
}