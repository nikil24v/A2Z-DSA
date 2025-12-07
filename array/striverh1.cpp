#include<bits/stdc++.h>
using namespace std;

vector<int> generate(int row)
{
    long long ans = 1;
    vector<int> temp;
    temp.push_back(1);

    for(int col = 1;col < row;col++)
    {
        ans = ans * (row - col);
        ans = ans / col;
        temp.push_back(ans);
    }
    return temp;
}
int main() {

    int numrows = 0;
    cout<<"Enter the numrows"<<endl;
    cin>>numrows;

    vector<vector<int>> ans;
    for(int i=1;i<=numrows;i++)
    {
        ans.push_back(generate(i));
    }

    for(auto it: ans)
    {
        for(auto j: it)
        cout<<j<<" ";

        cout<<endl;
    }
}
