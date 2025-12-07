#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&nums1,int m,vector<int>&nums2,int n) {

    //cout<<m<<endl;
    for(int i=0;i<nums1.size();i++)
    {
        if(nums1[i] == 0)
        {
            nums1.erase(nums1.begin() + i);
            --i;
        }
    }
    m = nums1.size();
    //cout<<m<<endl;
    
    for(int i=0;i<n;i++)
    {
        nums1.push_back(nums2[i]);
    }

    sort(nums1.begin(),nums1.end());

    for(auto it: nums1)
    cout<<it<<" ";
    cout<<endl;

    return;
}
int main() {
    
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};

    int m = nums1.size();
    int n = nums2.size();

    merge(nums1,m,nums2,n);
}