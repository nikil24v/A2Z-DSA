#include<bits/stdc++.h>
using namespace std;

vector<int> find_ele(vector<int>&nums)
{
    vector<int> res;
    sort(nums.begin(),nums.end());
    int maxi = INT_MIN;
    for(auto it: nums)
    {
        if(it > maxi)
        maxi = it;
    }

    int hash[maxi + 1] = {0};
    for(int i=0;i<=maxi;i++)
    {
        hash[nums[i]] += 1;
    }
    
    for(int i=0;i<=maxi;i++)
    {
        if(hash[i] > 1)
        res.push_back(i);
    }

    int temp = 1;
    for(auto it: nums)
    {
        if(it != temp)
        {
            res.push_back(temp);
            return res;
        }

        temp++;
    }
    return res;
}
int main()
{
    vector<int> arr = {3,1,2,5,3};
    auto res = find_ele(arr);
    for(auto it: res)
    cout<<it<<" ";
    cout<<endl;

}