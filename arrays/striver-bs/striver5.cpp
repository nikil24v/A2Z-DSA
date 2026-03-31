#include<bits/stdc++.h>
using namespace std;

int find_floor(int arr[],int n,int x)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] <= x)
        {
            ans = arr[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int find_ceil(int arr[],int n,int x)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;


    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] >= x)
        {
            ans = arr[mid];
            high = mid - 1;
        }
        else
        {
            low = mid  + 1;
        }
    }

    return ans;

}
int main()
{
    int target = 5;
    int arr[] = {3, 4, 4, 7, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int floor = find_floor(arr,n,target);
    int ceil = find_ceil(arr,n,target);

    cout<<"The floor is "<<floor<<" "<<"and the ceil is "<<ceil<<endl;

}