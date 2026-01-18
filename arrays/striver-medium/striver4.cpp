#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2, 3, 5, -2, 7, -4};
    
    int sum = 0;
    int maxi = 0;

    //2 3 -7 4 7 4

    for(int i=0;i<nums.size();i++)
    {
        sum = sum + nums[i];

        if(sum < 0)
        sum = 0;

        maxi = max(sum,maxi);
    }

    cout<<maxi<<endl;
}