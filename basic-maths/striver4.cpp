#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter the numbers"<<endl;
    cin>>n1>>n2;

    int gcd = 1;

    for(int i=1;i<=min(n1,n2);i++)  //till min of 2 numbers is enough!!
    {
        if(n1 % i == 0 && n2 % i == 0) // store only number that are divible by both
        gcd = i;
    }

    cout<<"Common GCD is "<<gcd<<endl;
}