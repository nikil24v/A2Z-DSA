#include<bits/stdc++.h>
using namespace std;

bool prime(int n) {

    int num = n;
    int i = 0;
    for(i=2;i<num;i++) {

        if(num % i == 0)
        break;
    }

    if(i < num)
    return false;
    else
    return true;
}
int main() {

    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;

    auto res = prime(num);
    cout<<boolalpha<<res<<endl;
    cout<<res<<endl;
}