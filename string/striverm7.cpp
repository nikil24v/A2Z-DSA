#include<bits/stdc++.h>
using namespace std;

int find_beauty(string s) {

    int totalbeauty = 0;
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        map<char,int> freq;
        for(int j=i;j<n;j++)
        {
            freq[s[j]]++;

            int max_freq = 0;
            int min_freq = INT_MAX;
            for(auto& [ch,count]: freq)
            {
                max_freq = max(max_freq,count);
                min_freq = min(min_freq,count);
            }
            totalbeauty =  totalbeauty + (max_freq - min_freq); 
            
        }
    }
    cout<<totalbeauty<<endl;
    return 0;
}
int main() {

    string s =  "aabcb";
    find_beauty(s);
}
