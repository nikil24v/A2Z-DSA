#include<bits/stdc++.h>
using namespace std;

int maxfreq(vector<int> &nums,int k)
{
    sort(nums.begin(),nums.end());
    int maxi = nums.back();
        
    for(int i=nums.size()-2;i>=0 && k!=0;)
    {
        if(nums[i] < maxi) {
        nums[i]++;
        k--;
        continue;
        }

        i--;
    }

    int cnt = 0;
    for(auto it: nums)
    {
        if(it == maxi)
        cnt++;
    }

    return cnt;
}
int main()
{
    vector<int> nums = {1,4,8,13};
    int k = 5;

    int res = maxfreq(nums,k);
    cout<<"The maximum no.of most frequent element is "<<res<<endl;
    return 0;
}