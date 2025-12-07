#include<bits/stdc++.h>
using namespace std;

int search(vector<int>&nums,int target) {

    for(int i=0;i<nums.size();++i)
    {
        if(nums[i] == target)
        {
            return i;
        }
    }

    return -1;
}
int main() {
    vector<int> nums = {-1,0,3,5,9,12};
    int res = search(nums,9);

    cout<<res<<endl;
}