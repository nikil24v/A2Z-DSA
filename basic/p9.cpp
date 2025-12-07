#include<iostream>
using namespace std;

int add(int x,int y)
{
    return x+y;
}
int main() {

    int(*fp)(int,int);
    fp = add;
    int res = (*fp)(1,1);
    cout<<res<<endl;
}