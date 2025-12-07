#include<bits/stdc++.h>
using namespace std;

int majority(vector<int>&nums) {

    int target = nums.size() / 2;
    
    map <int,int> mp;
    
    for(auto it : nums) {
        mp[it]++;
    }

    for(auto it : mp)
    {
        if(it.second > target)
        return it.first;
    }

    return -1;
}
int main() {

    vector<int> nums = {3,2,3};
    int res = majority(nums);
    cout<<res<<endl;  
}