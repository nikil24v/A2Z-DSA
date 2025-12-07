#include<bits/stdc++.h>
using namespace std;

int maxsub(vector<int>&nums) {

    int maxi = 0;
    for(int i=0;i<nums.size();i++) {

        for(int j=i;j<nums.size();j++) {

            int sum = 0;
            for(int k=i;k<=j;k++)
            {
                sum = sum + nums[k];
            }

            if(sum > maxi)
            maxi = sum;
        }
    }

    return maxi;
}
int main() {

    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int res = maxsub(nums);
    cout<<res<<endl;
}