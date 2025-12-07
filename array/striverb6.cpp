#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>&nums , int k) {

    while (k)
    {
        int temp = 0;
        temp = nums[0];

        nums.erase(nums.begin());
        nums.emplace_back(temp);

        k--;
    }
    
}
int main() {

    vector<int> arr = {1,2,3,4,5,6};
    int k = 2;

    rotate(arr,k);
    for(auto it : arr) {
        cout<<it<<" ";
    }
    cout<<endl;
}