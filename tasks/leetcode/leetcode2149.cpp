#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> pos;
    vector<int> neg;

    for (auto it : nums) {
        if (it < 0) {
            neg.push_back(it);
        } else {
            pos.push_back(it);
        }
    }

    vector<int> res;
    int i = 0;

    while (i < pos.size() && i < neg.size()) {
        res.push_back(pos[i]);
        res.push_back(neg[i]);
        i++;
    }

    return res;
}

int main() {
    vector<int> nums = {3, 1, -2, -5, 2, -4};

    vector<int> ans = rearrangeArray(nums);

    for (auto it : ans) cout << it << " ";
    cout << endl;

    return 0;
}