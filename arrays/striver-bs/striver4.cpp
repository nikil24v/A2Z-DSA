#include<bits/stdc++.h>
using namespace std;

int search_insert(vector<int>&nums,int x)
{
    int low = 0;
    int high = nums.size() - 1;
    int ans = -1;


    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(nums[mid] == x)
        {
            return mid;
        }
        else if(nums[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return low;
}
int main()
{
    vector<int> nums = {1,3,5,6,7};
    int target = 2;

    int res = search_insert(nums,target);
    cout<<res<<endl;
}