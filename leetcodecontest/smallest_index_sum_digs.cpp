#include<bits/stdc++.h>
using namespace std;

int smallestindex(vector<int>&nums) {

    int ind = INT_MAX;
    for(int i=0;i<nums.size();++i)
    {
        int num = nums[i];
        int sum = 0;
        while (num)
        {
            sum += num % 10;
            num /= 10;
        }

        if(sum == i)
        {
            ind = min(ind,i);
        }
    }

    if(ind > nums.size())
    ind = -1;

    return ind;
}
int main() {

    vector<int> arr = {101,135,2};
    int res = smallestindex(arr);
    cout<<res<<endl;
}