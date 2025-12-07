#include<bits/stdc++.h>
using namespace std;

int peak(vector<int>&nums) {

    int ind = 0;
    for(int i=0;i<nums.size();++i)
    {
        bool left = ((i == 0) || (nums[i] > nums[i - 1]));
        bool right = ((i == nums.size() - 1) || nums[i] > nums[i + 1]);

        if(left && right)
        ind = i;
    }

    return ind;
}
int main() {
    vector<int> arr = {1,2,3,1};
    int res = peak(arr);
    cout<<res<<endl;
}