#include<bits/stdc++.h>
using namespace std;

int sub(vector<int>&nums,int k)
{
    int count = 0;
    for(int i=0;i<nums.size();i++)
    {
        vector<int> temp;
        for(int j=i;j<nums.size();j++)
        {
            temp.push_back(nums[j]);
            int sum = 0;
            for(auto it: temp)
            {
                sum = sum ^ it;
            }

            if(sum == k)
            {
                count++;
            }
        }
    }

    return count;
}
int main() {

    vector<int> arr = {5, 6, 7, 8, 9};
    int target = 5;
    int res = sub(arr,target);
    cout<<res<<endl;

}