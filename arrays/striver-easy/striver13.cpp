#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 5, 2, 7, 1, 9};
    int k = 15;
    int n = sizeof(arr) / sizeof(arr[0]);

    /*
    BRUTE FORCE...

    int len = 0;

    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            sum += arr[j];

            if(sum == k)
            len = max(len,j-i+1);
        }
    }

    cout<<"The length of the longest sub array is "<<len<<endl;
    return 0;

    */

    //SILDING WINDOW

    int left = 0;
    int len = 0;int sum = 0;

    for(int right = 0; right < n; right++)
    {
        sum += arr[right];   
        while(sum > k)
        {
            sum -= arr[left];
            left++;
        }

        if(sum == k)
        {
            len = max(len, right - left + 1);
        }
    }

    cout<<"The Length of the Longest sub array is "<<len<<endl;
    return 0;
}