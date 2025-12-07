#include<bits/stdc++.h>
using namespace std;

int main() {

    // int *p;

    // p = new int[5];
    // p[2] = 420;

    // cout<<p[2]<<endl;

    // delete []p;
    // return 0;

    int arr[] = {1,2,3,4,5};

    int *p = arr;
    int *q = &arr[3];

    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;

    cout<< *q << endl;
    cout<< p-q<<endl;
    return 0;
}