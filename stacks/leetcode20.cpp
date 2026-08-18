#include<bits/stdc++.h>
using namespace std;


bool isvalid(string str)
{
    stack<int> s;

    for(auto it: str)
    {
        if(it == '(' || it == '{' || it == '[')
        {
            s.push(it);
        }
        else
        {
            if(s.empty())
            return false;

            char ch = s.top();

            if((it == ')' && ch == '(') || 
                (it == '{' && ch == '}') ||
                (it == '[' &&  ch == ']')
            ) {
                 s.pop();
            }
            else
            {
                return false;
            }
           
        }
    }
    return s.empty();
}

int main()
{
    string str = "(){}[]";

    bool res = isvalid(str);
    cout<<res<<endl;    
    return 0;
}