#include<bits/stdc++.h>
using namespace std;

int main() 
{
    vector<int> nums = {2,0,2,1,1,0};
    int cnt1 = 0,cnt2 = 0, cnt3 = 0;

    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] == 0)
        cnt1++;
        else if(nums[i] == 1)
        cnt2++;
        else
        cnt3++;
    }

    int ind = 0;

    for(int i=0;i<cnt1;i++)
    nums[ind++] = 0;

    for(int i=0;i<cnt2;i++)
    nums[ind++] = 1;

    for(int i=0;i<cnt3;i++)
    nums[ind++] = 2;

    for(auto it: nums)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}