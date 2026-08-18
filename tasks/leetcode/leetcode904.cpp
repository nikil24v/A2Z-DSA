#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,2,3,2,2};

    int left = 0;
    int right = 0;
    int maxlen = 0;
    unordered_map<int,int> count;

    for(right = 0;right<nums.size();right++)
    {
        count[nums[right]]++;

        
        while(count.size() > 2)
        {
            count[nums[left]]--;
            if(count[nums[left]] == 0)
            {
                count.erase(nums[left]);
            }
            left++;
        }
        
        maxlen = max(right - left + 1,maxlen);
    }

    cout<<"Max len is "<<maxlen<<endl;
    return 0;
}