#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {5,3,8,1,9,2};
    int n = nums.size();

    for(int i=0; i<n-1; i++)
    {
        bool swapped = false;
        for(int j=0; j<n-1-i; j++)
        {
            if(nums[j] > nums[j+1])
            {
                swap(nums[j], nums[j+1]);
                swapped = true;
            }
        }
        if(!swapped) 
        break;
    }

    for(auto it: nums) 
    cout << it << " ";
    cout << endl;
}