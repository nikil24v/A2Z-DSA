#include<bits/stdc++.h>
using namespace std;

void setzeros(vector<vector<int>>&nums) {

    vector<int> row;
    vector<int> col;

    for(int i=0;i<nums.size();i++)
    {
        for(int j=0;j<nums[i].size();j++) {

            if(nums[i][j] == 0)
            {
                row.emplace_back(i);
                col.emplace_back(j);
            }
        }
    }

    while(row.size()) {

    for(int j=0;j<nums.size();j++)
    nums[row[0]][j] = 0;

    row.erase(row.begin());
    }

    while(col.size()) {
    
        for(int i=0;i<nums.size();i++)
        nums[i][col[0]] = 0;

        col.erase(col.begin());
    }

    for(auto i: nums)
    {
        for(auto j : i)
        cout<<j<<" ";

        cout<<endl;
    }
    
    cout<<endl;
}
int main() {

    vector<vector<int>> mat = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setzeros(mat);
}