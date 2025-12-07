#include<bits/stdc++.h>
using namespace std;

vector<int> maxsub(vector<int>&nums) {

    int sum = 0;
    int maxi = INT_MIN;
    int start = 0,end = 0;
    for(int i=0;i<nums.size();i++) 
    {
        if(sum == 0)
        start = i;

        sum = sum + nums[i];

        if(sum > maxi) {
        maxi = sum;
        end = i;
        }

        if(sum < 0)
        sum = 0;
    }

    vector<int> res;
    for(int i=start;i<=end;i++)
    res.push_back(nums[i]);
    
    return res;
    
}
int main() {

    vector<int> nums = {2, 3, 5, -2, 7, -4};
    auto res = maxsub(nums);

    for(int i=0;i<res.size();i++)
    cout<<res[i]<<" ";
    cout<<endl;
}