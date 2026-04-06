#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    int res = 0;

    for(auto it: nums)
    {
        res = res ^ it;
    }

    cout<<"The single element in the array is "<<res<<endl;
}