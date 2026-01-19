#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {-1,1};

    vector<int> pos;
    vector<int> neg;
    int n = nums.size();

    for(auto it: nums)
    {
        if(it < 0)
        {
            neg.push_back(it);
        }
        else
        {
            pos.push_back(it);
        }
    }

    vector<int> res;
    int i = 0;

    while(i < neg.size() && i < pos.size())
    {
        res.push_back(pos[i]);
        res.push_back(neg[i]);
        i++;
    }

    for(auto it: res)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}