#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sum3(vector<int>&nums)
{
    
    set<vector<int>> st;
    for(int i=0;i<nums.size();i++) {
        
        for(int j=i+1;j<nums.size();j++)
        {
            int sum = 0;
            
            for(int k=j+1;k<nums.size();k++)
            {
                sum = nums[i] + nums[j] + nums[k];
                if(sum == 0) {
                vector<int> temp = {nums[i],nums[j],nums[k]};
                sort(temp.begin(),temp.end());
                st.insert(temp);    
                }
            }
        }
    }

    vector<vector<int>> ans(st.begin(),st.end());
    return ans;

}
int main() {

    vector<int> arr = {-1,0,1,2,-1,-4};

    auto res = sum3(arr);

    for(auto i : res)
    {
        for(auto j: i)
        cout<<j<<" ";

        cout<<endl;
    }
}