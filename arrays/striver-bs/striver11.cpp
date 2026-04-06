#include<bits/stdc++.h>
using namespace std;

int main() //Find How Many times the array is been rotated
{
    vector<int> nums = {4,5,6,7,0,1,2,3};
    
    int low = 0;
    int high = nums.size() - 1;

    while(low < high)
    {
        int mid = (low + high ) / 2;

        if(nums[mid] > nums[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    cout<<"The number of times the array got roatted is "<<low<<endl;
}