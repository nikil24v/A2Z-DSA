#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {-1,0,3,5,9,12};
    int target = 9;

    for(int i=0;i<arr.size();i++)
    {
        if(target == arr[i]) {
        cout<<i<<endl;
        return 0;
        }
    }

    cout<<-1<<endl;
    return 0;

}