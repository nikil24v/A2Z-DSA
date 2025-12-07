#include<bits/stdc++.h>
using namespace std;

int lowerbound(vector<int>&nums,int x) {

    int low = 0;
    int high = nums.size() - 1;
    int ans = -1;

    while(low <= high) {

        int mid = (low + high) / 2;

        if(nums[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else 
        {
            low = mid + 1;
        }
    }

    return ans;
}
int main() {

    vector<int> arr = {1,2,2,3};
    int x = 2;

    int res = lowerbound(arr,x);
    cout<<res<<endl;
}