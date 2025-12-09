#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    
    int rev = 0;
    while(num)
    {
        rev = rev * 10 + num % 10;
        num/=10;
    }

    cout<<rev<<endl;
}