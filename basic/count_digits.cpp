#include<iostream>
using namespace std;

int count(int num) {

    int n = num;
    int c = 0;
    while(n) {
        n/=10;
        c++;
    }
    return c;
}
int main() {
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;

    auto res = count(num);
    cout<<"Total no.of digits is "<<res<<endl;
    return 0;
}