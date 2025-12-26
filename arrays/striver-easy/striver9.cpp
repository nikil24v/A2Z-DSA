#include<bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> arr1 = {1,2,3,4,5};
    // vector<int> arr2 = {2,3,4,4,5};

    // unordered_set<int> s;

    // for(auto it: arr1)
    // s.insert(it);

    // for(auto it: arr2)
    // s.insert(it);

    // vector<int> temp(s.begin(),s.end());
    // sort(temp.begin(),temp.end());

    // for(auto it: temp)
    // cout<<it<<" ";
    // cout<<endl;

    // return 0;

    //TWO POINTER METHOD!!
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,3,4,4,5};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int left = 0, right = 0;
    vector<int> temp;

    while(left < n && right < m)
    {
        if(arr1[left] < arr2[right])
        {
            if(temp.empty() || temp.back() != arr1[left])
                temp.push_back(arr1[left]);
            left++;
        }
        else if(arr1[left] > arr2[right])
        {
            if(temp.empty() || temp.back() != arr2[right])
                temp.push_back(arr2[right]);
            right++;
        }
        else
        {
            if(temp.empty() || temp.back() != arr1[left])
                temp.push_back(arr1[left]);
            left++;
            right++;
        }
    }

    while(left < n)
    {
        if(temp.empty() || temp.back() != arr1[left])
            temp.push_back(arr1[left]);
        left++;
    }

    while(right < m)
    {
        if(temp.empty() || temp.back() != arr2[right])
            temp.push_back(arr2[right]);
        right++;
    }

    cout << "THE UNION ARRAY IS\n";
    for(int x : temp)
    cout << x << " ";
    cout<<endl;
}