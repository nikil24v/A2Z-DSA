#include<bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;

    int cnt = 0,n = num;
    while(n)
    {
        cnt++;
        n /= 10;
    }

    n = num;
    int temp = 0;

    while(n)
    {
        int summa = n % 10;
        temp = temp + pow(summa,cnt);
        n /= 10;
    }

    if(temp == num)
    cout<<"It is a armstrong number"<<endl;
    else
    cout<<"It is not an armstrong number"<<endl;

    return 0;
}