#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node*next;
    node() : data(0) ,next(nullptr) {}
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }

    node(int data,node*next) {
        this -> data = data;
        this -> next = next;
    }
};


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

bool detect(node*head) {

    /*
    map<node*,bool> mp;
    node*temp = head;

    while(temp)
    {
        if(mp.find(temp)!=mp.end())
        {
            return true;
        }
        mp[temp] = true;

        temp = temp -> next;
    }
    return false;
    */

    //torstoise and horse method 

    node*slow = head;
    node*fast = head;

    while(fast!=nullptr && fast -> next != nullptr)
    {
        slow = slow -> next;
        fast = fast -> next -> next;

        if(slow == fast )
        return true;
    }

    return false;
    
}
int main()
{
    node*head = new node(3);
    node*first = new node(2);
    node*second = new node(0);
    node*fourth = new node(4);

    head -> next = first;
    first -> next = second;
    second -> next = fourth;
    fourth -> next = first;


    bool res = detect(head);

    if(res)
    cout<<"Loop detected"<<endl;
    else
    cout<<"No loop!!"<<endl;
    //print(head);
}