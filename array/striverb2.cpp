#include<bits/stdc++.h>
using namespace std;

int main() {

    int nums[] = {1,2,3,4,5};
    int max1 = INT_MIN;

    int n = sizeof(nums) / sizeof(nums[0]);
    for(int i=0;i<n;i++)
    {
        if(nums[i] > max1)
        {
            max1 = nums[i];
        }
    }

    int max2 = INT_MIN;
    for(int i=0;i<n;i++) {

        if(nums[i] == max1)
        continue;

        if(nums[i] > max2)
        max2 = nums[i];

    }

    if(max2 <= 0)
    max2 = -1;
    
    cout<<"Scond largest element is "<<max2<<endl;
    return 0;
}