#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "3+5";

    int num1 = str[0] - '0';
    char op = str[1];
    int num2 = str[2] - '0';

    int res = 0;

    switch(op)
    {
        case '+':
        res = num1 + num2;
        break;

        case '-':
        res = num1 - num2;
        break;

        case '*':
        res = num1 * num2;
        break;

        case '/':
        res = num1 / num2;
        break;
        
        default:
        break;
    }

    cout<<res<<endl;
    cout<<endl;
}