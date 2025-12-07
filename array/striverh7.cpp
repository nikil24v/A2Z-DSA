#include<bits/stdc++.h>
using namespace std;

void merge(vector<vector<int>>&nums)
{
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for(int i=0;i<nums.size();i++)
    {
        int start = nums[i][0];
        int end = nums[i][1];
        if(!ans.empty() && end <= ans.back()[1])
        continue;

        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[j][0] <= end)
            {
                end = max(end,nums[j][1]);
            }
            else{
                break;
            }
        }
        ans.push_back({start,end});
    }

    for(auto ii: ans)
    {
        for(auto jj: ii)
        cout<<jj<<" ";
        cout<<" ";
    }
    cout<<endl;

    
}
int main() {

    vector<vector<int>> intervals = {{1,3},{2,6},{1,4},{8,10},{15,18}};
    merge(intervals);
}