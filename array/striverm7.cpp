#include<bits/stdc++.h>
using namespace std;

vector<int> rearrage(vector<int>&nums) {

    vector<int> pos;
    vector<int> neg;
    vector<int> res;

    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] < 0)
        {
            neg.push_back(nums[i]);
        }
        else
        {
            pos.push_back(nums[i]);
        }
    }

    int i = 0;
    int j = 0;
    while(i < pos.size() && i< neg.size()) {
        res.push_back(pos[i++]);
        res.push_back(neg[j++]);
    }

    return res;
}
int main() {

    vector<int> nums = {-1,1};
    auto res = rearrage(nums);

    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
}