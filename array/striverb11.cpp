#include<bits/stdc++.h>
using namespace std;

int find_consecutives_ones(vector<int>&nums){
    
    int count = 0;
    int cons_con = 0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] == 1)
        {
            count++;
            continue;
        }

        if(count > cons_con) {
        cons_con = count;
        count = 0;
        }
    }

    cout<<cons_con<<endl;
    return cons_con;
}

int main() {

    vector<int> nums = {1,1,0,1,1,1,0};
    find_consecutives_ones(nums);

}