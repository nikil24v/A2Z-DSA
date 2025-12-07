#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the limit"<<endl;
    cin>>n;

    int sp = 2 * (n - 1);

    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=i;j++)
        cout<<j;

        for(int s=1;s<=sp;s++)
        cout<<" ";

        for(int j=i;j>=1;j--)
        cout<<j;

        cout<<endl;
        sp = sp - 2;
    }

    return 0;

}