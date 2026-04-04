#include<bits/stdc++.h>
using namespace std;

int find_first(vector<int>&nums,int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int ans = -1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(nums[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if(nums[mid] < target )
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int find_last(vector<int>&nums,int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int ans = -1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

       if(nums[mid] == target)
       {
            ans = mid;
            low = mid + 1;
       }
       else if(nums[mid] < target)
       {
            low = mid + 1;
       }
       else
       {
            high = mid - 1;
       }
    }
    return ans;
}
int main() //Find the first and last occurence of the target
{

    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;

    int first = find_first(nums,target);
    int last = find_last(nums,target);
    cout<<first<<" "<<last<<endl;
}