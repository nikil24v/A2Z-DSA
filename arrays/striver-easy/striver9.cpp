#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {2,3,4,4,5};

    unordered_set<int> s;

    for(auto it: arr1)
    s.insert(it);

    for(auto it: arr2)
    s.insert(it);

    vector<int> temp(s.begin(),s.end());
    sort(temp.begin(),temp.end());

    for(auto it: temp)
    cout<<it<<" ";
    cout<<endl;

    return 0;
}