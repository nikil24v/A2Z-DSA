#include<bits/stdc++.h>
using namespace std;

int main() //Search in Sorted array
{
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    int flag = 0;

    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] == target) {
        cout<<"The index that target appereared is "<<i<<endl;
        flag = 0;
        }
    }

    if(flag)
    cout<<"There is no target"<<endl;
}