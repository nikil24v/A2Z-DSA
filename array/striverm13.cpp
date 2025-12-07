#include<bits/stdc++.h>
using namespace std;

void spiral(vector<vector<int>>&nums) {

    vector<int> res;
    int top = 0;
    int bottom = nums.size() - 1;
    int left = 0;
    int right = nums[0].size() - 1;

    for(int i=left;i<=right;i++) 
    res.push_back(nums[top][i]);
    top++;

    for(int i=top;i<=bottom;i++)
    res.push_back(nums[i][right]);
    right --;

    for(int i=right;i>=left;i--)
    res.push_back(nums[bottom][i]);
    bottom--;

    for(int i=left;i<=right;i++)
    res.push_back(nums[bottom][i]);

    for(auto it : res)
    cout<<it<<" ";
    cout<<endl;
}
int main() {

    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    spiral(matrix);
}