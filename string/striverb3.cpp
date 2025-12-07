#include<bits/stdc++.h>
using namespace std;

string largodd(string &str)
{
    string res = "";
    int num = stoi(str);
    
    while(num) {
        
        if(num % 2 !=0)
        {
            auto s = to_string(num);
            res = res + s;
            return res;
        }
        num = num / 10;
    }
    return res;
}
int main() {

    string str = "52";
    auto res = largodd(str);
    cout<<res<<endl;
}