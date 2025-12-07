#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sum4(vector<int>&nums,int target) {

    
    sort(nums.begin(),nums.end());
    set<vector<int>> res;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            int t = j + 1;
            int k = nums.size() - 1;

            while(t < k)
            {
                int sum = nums[i] + nums[j] + nums[t] + nums[k];

                if(sum < target)
                t++;
                else if(sum > target)
                k--;
                else {

                    vector<int> temp = {nums[i],nums[j],nums[t],nums[k]};
                    res.insert(temp);
                    t++;
                    k--;

                    while(t < k && nums[t] == nums[t - 1]) t++;
                    while(t < k && nums[k] == nums[k + 1]) k--;
                }
            }
        }
    }
    vector<vector<int>> ans(res.begin(),res.end());
    return ans;
}
int main() {

    vector<int> arr = {2,2,2,2,2};
    int target = 8;
    auto res = sum4(arr,target);

    for(auto i: res)
    {
        for(auto j: i)
        cout<<j<<" ";

        cout<<endl;
    }
}