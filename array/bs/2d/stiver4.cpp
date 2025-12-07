#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<vector<int>> mat = {{1,4},{3,2}};
    vector<int> temp;
    int largest = INT_MIN;
    for(int i=0;i<mat.size();i++)
    {
        for(int j=0;j<mat[i].size();j++)
        {
            if(mat[i][j] > largest)
            {
                largest = mat[i][j];
                temp.clear();
                temp.push_back(i);
                temp.push_back(j);
            }
        }
    }

    for(auto it : temp)
    cout<<it<<" ";
    cout<<endl;
    
    return 0;
}