#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int r,c;
    cout<<"Enter the row and column of the matrix"<<endl;
    cin>>r>>c;

    int mat[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>mat[i][j];
        }
    }

    int res = 0;
    for(int i=0;i<r;i++)
    {
        int count = 0;
        for(int j=0;j<c;j++)
        {
            if(mat[i][j] == 1)
            count++;
        }

        if(count > res) {
            
            res = i;
        }
    }

    cout<<res<<endl;
    return 0;
}