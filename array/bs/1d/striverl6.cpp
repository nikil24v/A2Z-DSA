#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>&nums,int target)
{
    int start = -1;
        int end = -1;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == target)
            {
                start = i;
                for(int j=i;j<nums.size();j++)
                {
                    if(nums[j] == target)
                    {
                        end = j;
                    }
                }
                break;
            }
        }

        return {start,end};
}
int main() {

    vector<int> arr = {1};
    int target = 1;
    //op = {3,4};

    auto res = searchRange(arr,target);
    for(auto it: res)
    cout<<it<<" ";
    cout<<endl;
}