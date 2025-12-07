#include<bits/stdc++.h>
using namespace std;

int find_unique_ele(vector<int>&nums) {

    int ele = 0;
    for(int i=0;i<nums.size();i++)
    ele = ele ^ nums[i];

    return ele;
}
int main() {

    vector<int> arr = {2,2,1};
    auto res = find_unique_ele(arr);
    cout<<res<<endl;
}