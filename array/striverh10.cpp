#include<bits/stdc++.h>
using namespace std;

int inversion(vector<int>&nums) {

    int count = 0;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            if((nums[i] > nums[j]) && (i < j))
            {
                count++;
            }
        }
    }


    return count;
}
int main() {

    vector<int> arr = {2, 3, 7, 1, 3, 5};
    cout<<inversion(arr)<<endl;
}