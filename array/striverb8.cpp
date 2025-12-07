#include<bits/stdc++.h>
using namespace std;

int ls(vector<int>&nums,int k) 
{
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] == k)
        return i;
    }

    return -1;
}
int main() {

    vector<int> nums = {2,3,4,5,3};
    int target = 3;
    auto res = ls(nums,target);

    cout<<res<<endl;
}