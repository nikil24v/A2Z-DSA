#include<iostream>
using namespace std;

void fun(int x) // name mangling comes into place..
{
    cout<<x<<endl;
}
void fun(char ch)
{
    cout<<ch<<endl;
}

int main() {

    int x = 10;
    char ch = 'a';

    fun(x);
    fun(ch);
}