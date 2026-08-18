#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;
    int maxlen = 0;
    
    int left = 0;
    int right = 0;
    int zerocount = 0;

    for(right = 0;right<nums.size();right++)
    {
        if(nums[right] == 0)
        {
            zerocount++;
        }

        while(zerocount > k)
        {
            if(nums[left] == 0)
            {
                zerocount--;
            }
            left++;
        }

        int len = right - left + 1;

        if(len > maxlen)
        maxlen = len;

    }

    cout<<maxlen<<endl;
    return 0;
}