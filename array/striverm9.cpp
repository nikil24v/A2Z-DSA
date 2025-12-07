#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>&nums) {

    vector<int> res;

    for(int i =0;i<nums.size();i++) {

        int j = 0;
        for(j=i+1;j<nums.size();j++) {

            if(nums[i] < nums[j])
            break;
        }

        if(j == nums.size())
        res.push_back(nums[i]);
    }

    return res;
}
int main() {

    vector<int> nums = {-3, 4, 5, 1, -4, -5};
    auto res = leaders(nums);

    for(int i=0;i<res.size();i++)
    cout<<res[i]<<" ";
    cout<<endl;
}