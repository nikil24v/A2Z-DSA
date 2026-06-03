#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3] = {{2,6,7},{2,4,5},{2,4,5}};

    int temp1 = 0;
    int temp2 = 0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i == j)
            {
                temp1+= arr[i][j];
            }

            if(i+j == 3 -1) // row - 1
            {
                temp2+= arr[i][j];
            }
        }
    }

    cout<<temp1<<endl;
    cout<<temp2<<endl;
}