#include<bits/stdc++.h>
using namespace std;

int search(vector<int>&nums,int x) {

    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] == x)
        {
            return i;
        }
    }

    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] <= x)
        {
            continue;
        }
        else {
            nums.push_back(x);
            return i;
        }
    }
}
int main() {

    vector<int> arr = {1,3,5,6};
    int target = 2;
    int res = search(arr,target);
    cout<<res<<endl;
}