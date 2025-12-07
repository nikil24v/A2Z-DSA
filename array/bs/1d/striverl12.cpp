#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nums = {1,1,2,3,3,4,4,8,8};

    int ans = 0;

    for(auto it: nums)
    {
        ans = ans ^ it;
    }

    cout<<ans<<endl;
}