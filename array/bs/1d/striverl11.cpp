#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {3,4,5,1,2};
    int min = arr[0];

    int cnt = 0;
    int ans = 0;
    for(int i=0;i<arr.size();i++)
    {
        cnt++;
        if(arr[i] <= min)
        {
            min = arr[i];
            ans = cnt;
        }
    }
    ans--;
    cout<<"No.of times array is roatetd is "<<ans<<endl;
    return 0;
}