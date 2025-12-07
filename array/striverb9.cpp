#include<bits/stdc++.h>
using namespace std;

vector<int> find_union(vector<int>&nums1,vector<int>&nums2) {

    vector<int> res;

    for(int i=0;i<nums1.size();i++) {

        for(int j=0;j<nums2.size();j++) {

            if(nums1[i] == nums2[j]) {
                res.emplace_back(nums1[i]);
                nums1.erase(nums1.begin() + i);
                nums2.erase(nums2.begin() + j);

                i--;
                j--;
            }
        }
    }

    for(auto it: nums1)
    res.push_back(it);

    for(auto it: nums2)
    res.push_back(it);

    sort(res.begin(),res.end());
    for(int i=0;i<res.size() - 1;i++) {

        if(res[i] == res[i+1])
        {
            res.erase(res.begin() + i);
            i--;
        }
    }

    return res;
}
int main() {
    
    vector<int> nums1 = {3,4,6,7,9,9};
    vector<int> nums2 = {1,5,7,8,8};

    auto res = find_union(nums1,nums2);
    
    for(auto it : res)
    cout<<it<<" ";
    cout<<endl;
}