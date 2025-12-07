#include<bits/stdc++.h>
using namespace std;

vector<int> largest_cons_sq(vector<int>&nums) {

    sort(nums.begin(),nums.end());
    vector<int> res;
    for(int i=0;i<nums.size();i++) {

        if(nums[i] + 1 == nums[i+1]) {
        res.push_back(nums[i]);
        }
        else
        {
            if(nums[i] - 1 == nums[i - 1])
            res.push_back(nums[i]);
        }
    }

    return res;
}
int main() {

        vector<int> arr = {3, 8, 5, 7, 6};
        vector<int> res = largest_cons_sq(arr);

        for(auto it : res)
        cout<<it<<" ";
        cout<<endl;
}