#include<bits/stdc++.h>
using namespace std;

vector<int> major(vector<int>&nums) {

    int target = nums.size() / 3;
    vector<int> res;

    int maxi = INT_MIN;

    for(auto it: nums)
    {
        if(it > maxi)
        maxi = it;
    }

    int hash[maxi + 1] = {0};
    for(int i=0;i<nums.size();i++)
    hash[nums[i]] += 1;

    for(int i=0;i<=maxi;i++)
    {
        if(hash[i] > target)
        res.push_back(i);
    }
    return res;
}
int main() {

    vector<int> nums = {1,2};
    auto res = major(nums);
    for(auto it: res)
    cout<<it<<" ";
    cout<<endl;
}