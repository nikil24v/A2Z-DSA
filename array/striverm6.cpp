#include<bits/stdc++.h>
using namespace std;

int maxprofit(vector<int>&nums) {

    int mini = INT_MAX;
    int maxi = 0;
    for(auto it : nums) {
        mini = min(mini,it);
        maxi = max(maxi,it - mini);
    }

    return maxi;
}

int main() {

    vector<int> prices = {7,1,5,3,6,4};
    int res = maxprofit(prices);
    cout<<res<<endl;
}