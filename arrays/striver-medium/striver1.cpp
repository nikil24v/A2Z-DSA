#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> temp;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i;j<nums.size();j++)
        {
            if(i == j)
            continue;

            if(nums[i] + nums[j] == target) {
            temp.push_back(i);
            temp.push_back(j);
            }
        }
    }

    for(auto it: temp)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}