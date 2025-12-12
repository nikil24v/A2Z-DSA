#include<iostream>
using namespace std;

void fun(string &s,int n)
{
    if(n == 0)
    return;
    else{

        cout<<s<<endl;
        fun(s , n -1);
    }
}

int main()
{
    string str;
    cout<<"Enter the name: ";
    cin>>str;
    cout<<endl;
    cout<<"Enter how many times You want to print: ";
    int n;
    cin>>n;
    fun(str,n);
}