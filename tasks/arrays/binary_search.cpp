#include<bits/stdc++.h>
using namespace std;


int binary_search(vector<int>& arr,int k)
{
    int low = 0;
    int high = arr.size() - 1;

    while(low <= high)
    {
        int mid =  (low + high) / 2;

        if(arr[mid] == k)
        {
            return mid;
        }
        else if(arr[mid] < k)
        {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13};
    int target = 11;

    int res = binary_search(arr,target);
    
    if(res > 0)
    cout<<"Target is found at "<<res<<endl;
    else
    cout<<"Target is not Found!!"<<endl;
}