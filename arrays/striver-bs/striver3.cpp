#include<bits/stdc++.h>
using namespace std;

int upper_bound(int arr[],int n,int x)
{

    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i] > x)
    //     {
    //         return i;
    //     }

    // }

    // return -1;

    int low = 0;
    int high = n - 1;
    int ans = -1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        
        if(arr[mid] > x)
        {
            ans = arr[mid];
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
}
int main()
{
    int arr[] = {1,2,2,3};
    int x = 2;

    int n = sizeof(arr) / sizeof(arr[0]);

    int res = upper_bound(arr,n,x);
    
    cout<<res<<endl;

}