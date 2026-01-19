#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {7,6,4,3,1};
    
    //BRUTE FORCE
    // int maxi = 0;
    // for(int i=0;i<nums.size();i++)
    // {
    //     for(int j=i+1;j<nums.size();j++)
    //     {
    //         int profit = nums[j] - nums[i];

    //         maxi = max(maxi,profit);
    //         //cout<<maxi<<endl;
    //     }
    //     //break;
    // }

    // cout<<"The maximum profit is "<<maxi<<endl;
    // return 0;

    //OPTINMAL SOLUTION

    int minprice = INT_MAX;
    int maxprofit = 0;

    for(auto price : nums)
    {
        if(price < minprice)
        minprice = price;
        else
        {
            maxprofit = max(maxprofit,price - minprice);
        }
    }

    cout<<"The Maximum profit that can be obtained is : ";
    cout<<maxprofit<<endl;
}