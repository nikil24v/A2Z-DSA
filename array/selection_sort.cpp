#include<bits/stdc++.h>
using namespace std;

void selection(vector<int>&nums) {

    for(int i=0;i<nums.size();i++) {

        int min = i;
        bool didswap = false;
        for(int j = i;j<nums.size();j++)
        {
            if(nums[j] < nums[min])
            {
                min = j;
                didswap = true;
            }
        }

        if(didswap) {
            int temp = nums[i];
            nums[i] = nums[min];
            nums[min] = temp;
        }
    }
}
int main() {

    vector<int> arr = {1,3,2,4,5};
    selection(arr);

    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}