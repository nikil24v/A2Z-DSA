#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int sum = 0;

    for(int i=n-1;i>0;i--)
    {
        sum = sum + i;
    }

    cout<<sum<<endl;
}