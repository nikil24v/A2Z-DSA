#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,1,0,1,1,1};

    int cnt = 0;
    int maxfreq = 0;

    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] == 1)
        {
            cnt++;
            continue;
        }

        maxfreq = max(cnt,maxfreq);
        cnt = 0;
    }

    maxfreq = max(cnt,maxfreq);
    cout<<"The most consecutive 1's is "<<maxfreq<<endl;
    return 0;
}