#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    /* 1 2 3
       4 5 6
       7 8 9
    */

    int even = 0;
    int odd = 0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]%2==0)
            {
                even = even + arr[i][j];
            }

            if(arr[i][j] %2!=0 )
            {
                odd = odd + arr[i][j];
            }
        }
    }

    arr[0][0] = even;
    arr[0][1] = odd;
}