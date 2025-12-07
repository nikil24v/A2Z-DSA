#include<bits/stdc++.h>
using namespace std;

vector<int> floor_ceil(vector<int>&nums,int n,int x)
{
    int low = 0;
    int high = nums.size() - 1;
    int floor = -1;
    while(low <= high) {

        int mid = (low + high) / 2;

        if(nums[mid] <= x)
        {
            floor = nums[mid];
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    int ceil = -1;
    low = 0;
    high = nums.size() - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(nums[mid] >= x)
        {
            ceil = nums[mid];
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return {floor,ceil};
}
int main() {

    vector<int> arr = {3, 4, 5, 6, 7};
    int n = arr.size();
    int x = 5;

    auto res = floor_ceil(arr,n,x);
    for(auto it: res)
    {
        cout<<it<<" ";
    }
    cout<<endl;

}