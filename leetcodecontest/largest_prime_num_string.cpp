#include<bits/stdc++.h>
using namespace std;

long long larget_prime_sum(string& s) {

    long long sum = 0;
    for(int i=0;i<s.size();i++)
    {
        string res = "";
        for(int j=i;j<=s.size();j++)
        {
            res += s[j];
        }

        int num = stoi(res);
        int flag = true;
        for(int i=2;i<num;++i)
        {
            if(i % num == 0)
            flag == false;
        }

        if(flag == true)
        {
            cout<<num<<endl;
            sum+= num;
        }
    }

    return sum;
}
int main() {

    string str = "12234";
    auto res = larget_prime_sum(str);
    //cout<<res<<endl;
}