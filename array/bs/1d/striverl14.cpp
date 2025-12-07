#include<bits/stdc++.h>
using namespace std;

int main() {

    int num = 30;
    int res = 0;
    for(int i=1;i*i<=num;++i)
    {
        res = i;
    }
    //res = sqrt(num);
    cout<<res<<endl;
}