#include<bits/stdc++.h>
using namespace std;

int subarray(vector<int>&nums,int k) {

    int sum = 0;
    int count = 0;
    
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i;j<nums.size();j++)
        {
            sum = sum + nums[j];

            if(sum == k)
            {
                count++;
                sum = 0;
            }
        }
    }
    return count;
}
int main() {

    vector<int> nums = {1,1,1};
    int k = 3;

    int sum = subarray(nums,k);
    cout<<sum<<endl;
}