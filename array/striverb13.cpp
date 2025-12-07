#include<bits/stdc++.h>
using namespace std;

int find_len(vector<int>&nums,int k) {

    int max_len = 0;
    for(int i=0;i<nums.size();i++) {
        vector<int> res;
        int temp = 0;
        for(int j=i;j<nums.size();j++)
        {
            int len = 0;
            if(temp < k) {
                res.push_back(nums[j]);
                temp += nums[j];
                continue;
            }

            len = res.size();
            if(len > max_len) {
            max_len = len;
            //res.clear();
            }

            res.clear();
        }
    }
    return max_len;
}
int main() {
  
    vector<int> arr = {2,3,5};
    int k = 5;

    int res = find_len(arr,k);
    cout<<res<<endl;
}