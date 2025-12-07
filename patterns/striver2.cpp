// #include<iostream>
// using namespace std;
// int main() {

//     for(int i=1;i<=5;i++)
//     {
//         for(int j=1;j<=i;j++)
//         cout<<"* ";
//         cout<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the limit"<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}