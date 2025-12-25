#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int num = 3;

    int indx = -1;
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        if(arr[i] == num)
        {
            indx = i;
            break;
        }
    }

    if(indx == -1)
    {
        cout<<"There is no such element!!"<<endl;
    }
    else
    {
        cout<<"Element found in "<<indx<<endl;
    }

    return 0;
}