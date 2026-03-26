#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {3,5,8,15,19};
    int x = 9;

    //brute force..
    // for(int i=0;i<nums.size();i++)
    // {
    //     if(nums[i] >= x)
    //     {
    //         cout<<nums[i]<<endl;
    //         break;
    //     }
    // }

    // auto it = lower_bound(nums.begin(),nums.end(),x);
    // cout<<*it<<endl;


    //optimal
    int low = 0;
    int high = nums.size() - 1;
    int ans = 0;

    while(low <= high)
    {
        int mid = (low + high) / 2;
        
        if(nums[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout<<ans<<endl;

}