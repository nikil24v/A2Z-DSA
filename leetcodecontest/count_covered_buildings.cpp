#include<bits/stdc++.h>
using namespace std;

int count(int n,vector<vector<int>>&build) {
    
    set<pair<int, int>> s;
    for (auto x : build) {
        s.insert({x[0], x[1]});
    }

    int coveredBuildingsCount = 0; 

   
    for (auto b : build) {
        int x = b[0];
        int y = b[1];

        
        bool leftCovered = false;
        for (int i = y - 1; i >= 1; --i) {
            if (s.count({x, i})) {
                leftCovered = true;
                break;
            }
        }

        bool rightCovered = false;
        for (int i = y + 1; i <= n; ++i) {
            if (s.count({x, i})) {
                rightCovered = true;
                break;
            }
        }

        bool upCovered = false;
        for (int i = x - 1; i >= 1; --i) {
            if (s.count({i, y})) {
                upCovered = true;
                break;
            }
        }

        bool downCovered = false;
        for (int i = x + 1; i <= n; ++i) {
            if (s.count({i, y})) {
                downCovered = true;
                break;
            }
        }

       
        if (leftCovered && rightCovered && upCovered && downCovered) {
            coveredBuildingsCount++;
        }
    }

    return coveredBuildingsCount;
}

int main() {
    int n = 5;
    vector<vector<int>> buildings = {{1,3}, {3,2}, {3,3}, {3,5}, {5,3}};
    
    int res = count(n, buildings);
    cout << res << endl; 
    return 0;
}
