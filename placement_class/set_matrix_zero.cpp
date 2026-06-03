#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3] = {{1,1,1},{1,1,1},{1,0,1}};

    int l1 = 0;
    int l2 = 0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j] == 0)
            {
                l1 = i;
                l2 = j;
            }
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i == l1 || j == l2)
            {
                arr[i][j] = 0;
            }
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        cout<<arr[i][j]<<" ";

        cout<<endl;
    }
}