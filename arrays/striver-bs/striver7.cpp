#include<bits/stdc++.h>
using namespace std;

int main() //Find the Occurence of the target 
{
    vector<int> nums = {2, 2 , 3 , 3 , 3 , 3 , 4};
    int x = 3;

    int count = 0;

    for(int i=0;i<nums.size();i++)
    {
        int res = x & nums[i];

        if(res == x)
        count++;
    }

    cout<<"Therefore the number of occrence are "<<count<<" "<<endl;
}