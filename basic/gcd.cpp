#include<bits/stdc++.h>
using namespace std;

int eculidean_gcd(int n1,int n2) {

    while(n2 != 0) {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    return n1;
}
int gcd(int n1,int n2) {

    vector<int> div1;
    vector<int> div2;


    for(int i=1;i<=n1;i++)
    {
        if(n1%i == 0)
        div1.push_back(i);
    }

    for(int j=1;j<=n2;j++)
    {
        if(n2%j == 0)
        div2.push_back(j);
    }

    int max = INT_MIN;
    for(auto i : div1) {

        for(auto j: div2)
        {

            if(i == j) {

                if(i > max)
                max = i;

            }
        }
    }

    cout<<max<<endl;
    return 0;    
}
int main() {
    int n1,n2;
    cout<<"Enter the number"<<endl;
    cin>>n1>>n2;

    gcd(n1,n2);
    auto res = eculidean_gcd(n1,n2);
    cout<<res<<endl;
    return 0;
}