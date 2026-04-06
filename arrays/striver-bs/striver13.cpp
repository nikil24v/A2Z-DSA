#include<bits/stdc++.h>
using namespace std;

int main() //Find the peak element
{
    vector<int> nums = {1,2,3,1};
    int peak = -1;

    for(int i=0;i<nums.size();i++)
    {
        if(i > 0 && i < nums.size())
        {
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1])
            {
                peak = nums[i];
            }
        }
    }

    cout<<"The peak elemnt is "<<peak<<endl;
}