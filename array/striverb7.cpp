#include<bits/stdc++.h>
using namespace std;

void move(vector<int>&nums) {
    
    int count = 0;
    for(int i=0;i<nums.size();) {
        
        if(nums[i] == 0)
        {
            count++;
            nums.erase(nums.begin() + i);
        }
        else
        i++;
    }

    while(count) {

        nums.push_back(0);
        count--;
    }
}
int main() {

    vector<int> arr = {0,0,0,1,4,0,5,2};
    move(arr);

    for(auto it : arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}