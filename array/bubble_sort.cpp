#include<bits/stdc++.h>
using namespace std;

void bubble(vector<int>&nums) {

    for(int i=0;i<nums.size();i++)
    {
        int didswap = 0;
        for(int j=0;j<nums.size() - i - 1;j++)
        {
            if(nums[j] > nums[j+1])
            {
                didswap = 1;
                swap(nums[j],nums[j+1]);
            }
        }

        if(didswap == 0)
        break;
    }
    
}
int main() {

    vector<int> arr = {1,3,2,4,5};
    bubble(arr);

    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}