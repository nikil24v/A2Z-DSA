#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int count = 0;
    int n = num;
    while(n)
    {
        n = n / 10;
        count++;
    }

    cout<<"The Number of Digits in that number is "<<num<<endl;
    cout<<count<<endl;
    return 0;
}