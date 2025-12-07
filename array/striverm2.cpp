#include<bits/stdc++.h>
using namespace std;

void selction_sort(vector<int>&nums) {

   for(int i=0;i<nums.size();i++) {

        for(int j = i+1;j<nums.size();j++) {

            if(nums[j] < nums[i]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
   }
}
int main() {

    vector<int> nums = {2,0,2,1,1,0};

    selction_sort(nums);
    for(int i=0;i<nums.size();i++)
    cout<<nums[i]<<" ";
    cout<<endl;
}