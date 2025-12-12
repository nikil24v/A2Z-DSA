#include<bits/stdc++.h>
using namespace std;

void fun(int i,int n)
{

    if(i == n){
        cout<<i<<" ";
        cout<<endl;
        return;
    }
    else
    {
        cout<<i<<" ";
        fun(i+1,n);
    }
    cout<<endl;

}
int main()
{

    int n;
    cout<<"Enter n: ";
    cin>>n;

    fun(1,n);
}