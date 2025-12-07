#include<bits/stdc++.h>
using namespace std;

vector<int> div(int n) {

    vector<int> res;
    for(int i=1;i<=n;i++) {
        
        if(n%i == 0)
        res.push_back(i);
    }

    return res;
}
int main() {

    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    
    auto res = div(n);
    for(auto it : res)
    cout<<it<<" ";
    cout<<endl;
    
    return 0;
}