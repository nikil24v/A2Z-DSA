#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;

    while(k)
    {
        int last = nums.back();
        nums.erase(nums.end()-1);

        nums.insert(nums.begin(),last);
        k--;
    }

    for(auto it: nums)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}