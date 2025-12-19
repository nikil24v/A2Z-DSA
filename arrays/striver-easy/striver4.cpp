#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> nums = {1,1,2,2,2,3,3};
  int n = nums.size();

  int i = 0;
  for(int j=1;j<nums.size();j++)
  {
        if(nums[i] != nums[j])
        {
            nums[i+1] = nums[j];
            i++;
        }
  }

  cout<<"No.of Unique Elements is "<<i+1<<endl;
}