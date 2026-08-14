#include<bits/stdc++.h>
#define MAX 5
using namespace std;

class que {

    int data[MAX];
    int front;
    int rear;

    public:

            que()
            {
                front = -1;
                rear = -1;
                //cout<<"HI"<<endl;
            }

            void enque(int value)
            {
                if(rear == MAX -1)
                {
                    cout<<"Q overflow"<<endl;
                    return;
                }

                if(front == -1)
                front = 0;

                rear++;
                data[rear] = value;
            }

            void deque()
            {
                if(front == -1 || front > rear)
                {
                     cout << "Queue Underflow" << endl;
                    return;
                }

                front++;
            }

            int peek()
            {
                if(front == -1 || front > rear)
                {
                    cout << "Queue is empty" << endl;
                    return -1;
                }

                return data[front];
            }

            void display()
            {
                for(int i=front;i<=rear;i++)
                {
                    cout<<data[i]<<" ";
                }
                cout<<endl;
            }
};

int main()
{
    que q;

    q.enque(10);
    q.enque(20);
    q.deque();

    q.display();
}