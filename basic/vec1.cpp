#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {1,2,3,4,5};

    // vector<int>::iterator it;
    // it = v.begin();
    // cout<<*(it)<<endl;

    // it++;
    // cout<<*(it)<<endl;

    // for(vector<int>::iterator i=v.begin();i!=v.end();i++)
    // {
    //     cout<<*(i)<<endl;
    // }

   v.erase(v.begin()+1,v.begin()+3);
    for(auto i=v.begin();i!=v.end();i++)
    cout<<*(i)<<" ";
    cout<<endl;
}