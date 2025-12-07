#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {2, 2 , 3 , 3 , 3 , 3 , 4};
    int target = 3;

    int cnt = 0;

    for(int i=0;i<arr.size();++i)
    {
        if(arr[i] == target)
        cnt++;
    }

    cout<<cnt<<endl;
}