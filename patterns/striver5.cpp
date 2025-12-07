// #include<iostream>
// using namespace std;

// int main() {

//     int n;
//     cout<<"Ente the limit"<<endl;
//     cin>>n;

//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i;j++)
//         cout<<"* ";
//         cout<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i;j++)
        cout<<"* ";
        cout<<endl;
    }
    
}