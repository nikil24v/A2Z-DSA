#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxi = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > maxi)
        maxi = arr[i];
    }

    cout<<maxi<<endl;
}