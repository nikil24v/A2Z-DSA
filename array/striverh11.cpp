#include<bits/stdc++.h>
using namespace std;

int revpairs(vector<int>&nums)
{
    
    int count = 0;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i] >  nums[j] * 2)
            count++;
        }
    }

    return count;
}
int main() {

    vector<int> arr = {1,3,2,3,1};
    int res = revpairs(arr);
    cout<<res<<endl;
}