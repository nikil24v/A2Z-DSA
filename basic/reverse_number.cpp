#include<iostream>
using namespace std;

int reverse(int num) {

    int n = num;
    int rev = 0;
    while(n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return rev;
}
int main() {
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;

    auto res = reverse(num);
    cout<<"Number after reverse"<<endl;
    cout<<res<<endl;
}