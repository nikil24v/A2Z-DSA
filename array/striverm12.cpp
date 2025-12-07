#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>&nums) {

    vector<vector<int>> res;
    for(int j = 0;j<nums.size();j++) {
        vector<int> temp;
        for(int i=nums.size() - 1;i>=0;i--)
        {
            temp.push_back(nums[i][j]);
        }
        res.push_back(temp);
    }

    for(auto rows: res)
    {
        for(auto cols: rows)
        cout<<cols<<" ";
        cout<<endl;
    }
}
int main() {

    vector<vector<int>> matrix = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    rotate(matrix);
}