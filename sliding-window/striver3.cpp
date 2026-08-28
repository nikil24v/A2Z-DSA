#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> fruits = {1,2,3,2,2};

    int left = 0,right = 0;
    unordered_map<int,int> count;
    int maxlen = 0;

    for(right = 0;right<fruits.size();right++)
    {
        count[fruits[right]]++;

        while(count.size() > 2)
        {
            count[fruits[left]]--;

            if(count[fruits[left]] == 0)
            {
                count.erase(fruits[left]);
            }
            left++;
        }

        maxlen = max(maxlen,right-left+1);
    }

    cout<<"We can pick from "<<maxlen<<" Tress"<<endl;
}