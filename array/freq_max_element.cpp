#include<bits/stdc++.h>
using namespace std;

int maxfreq(vector<int>&nums,int k) {

    sort(nums.begin(),nums.end());
    int max_val = nums[nums.size() - 1];

    for(int i = nums.size() - 2 ; i>=0 ;) {

        if(k == 0)
        break;

        if(nums[i] < max_val)
        {
            nums[i]++;
            k--;
            continue;
        }

        i--;
    }

    int count = 0;
    for(int i=0;i<nums.size();i++)
    {
        if(max_val == nums[i])
        count++;
    }

    return count;
}
int main() {

    vector<int> nums = {1,2,4};
    int k = 5;
    auto res = maxfreq(nums,k);
    cout<<res<<endl;
}