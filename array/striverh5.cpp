#include<bits/stdc++.h>
using namespace std;

int longsub(vector<int>&nums)
{
    vector<int> res = {};
    for(int i=0;i<nums.size();i++)
    {
        int sum = 0;
        vector<int> temp;
        for(int j=i;j<nums.size();j++)
        {
            sum = sum + nums[j];
            temp.push_back(nums[j]);

            if(sum == 0)
            {
                if(temp.size() > res.size())
                {
                    res.clear();
                    res = temp;
                }
            }
        }
    }

    
    
    return res.size();
}
int main() {

    vector<int> arr = {1, 0, -5};
    int res = longsub(arr);
    cout<<res<<endl;
}