#include<bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int>&nums,int k) {

    vector<int> res;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] + nums[i+1] == k) {
            res.push_back(i);
            res.push_back(i+1);
        }
    }

    return res;
}
int main() {

    vector<int> nums = {3,3};
    int target = 6;

    auto res = twosum(nums,target);
    for(auto it : res)
    cout<<it<<" ";
    cout<<endl;
}