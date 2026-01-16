#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2,2,1,1,1,2,2};
    int n = nums.size();
    unordered_map<int,int> mp;

    for(auto it: nums)
    {
        mp[it]++;
    }

    for(auto it: mp)
    {
        if(it.second > n / 2)
        {
            cout<<it.first<<endl;
            return 0;
        }
    }
    
}