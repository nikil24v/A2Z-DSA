#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int odd = 0;
    int even = 0;

    for(int i=0;i<n;i++)
    {
        if(i%2 == 0)
        {
            even = even + arr[i];
        }
        else
        {
            odd = odd + arr[i];
        }
    }

    cout<<"Even : "<<even<<" "<<"Odd : "<<odd<<endl;
    return 0;
}