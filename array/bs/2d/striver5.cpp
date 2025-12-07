#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<vector<int>> mat = {{1,3,8},{2,3,4},{1,2,5}};

    vector<int> temp;

    for(auto i: mat)
    {
        for(auto j: i)
        temp.push_back(j);
    }

    sort(temp.begin(),temp.end());
    int mid = temp.size() / 2;

    cout<<temp[mid]<<endl;
    return 0;
}