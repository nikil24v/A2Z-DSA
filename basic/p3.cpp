#include<iostream>
using namespace std;

int main() {

    int r,c;
    cout<<"Enter the rows and cols"<<endl;

    cin>>r>>c;

    int **p = new int *[r];
    for(int i=0;i<r;i++)
    {
        p[i] = new int[c];
    }

    if(p == NULL)
    {
        cout<<"Memory allocation failed"<<endl;
        return 0;
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cin>>p[i][j];
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cout<<p[i][j]<<" ";

        cout<<endl;
    }

    for(int i=0;i<r;i++)
    delete []p[i];
    
    delete []p;
}