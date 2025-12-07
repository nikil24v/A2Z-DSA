#include<bits/stdc++.h>
using namespace std;

int main() {

    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;

    int n = num;
    int count = 0;
    while(n) {
        n /= 10;
        count++;
    }

    n = num;
    int sum = 0;
    while(n) {
        int rem = n % 10;
        sum = sum + pow(rem,count);
        n /= 10;
    }

    cout<<sum<<endl;
    if(sum == num)
    cout<<"Armstrong number"<<endl;
    else 
    cout<<"Not an Armstrong number"<<endl;
    
    return 0;
}