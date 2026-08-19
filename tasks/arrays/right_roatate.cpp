#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;

    k = k % nums.size();  

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());

    // while(k)
    // {
    //     int last = nums.back();
    //     for(int i=nums.size()-1;i>0;i--)
    //     {
    //         nums[i] = nums[i-1];
    //     }
    //     nums[0] = last;
    //     k--;
    // }
   
    for(auto it: nums)
    cout<<it<<" ";
    cout<<endl;
}