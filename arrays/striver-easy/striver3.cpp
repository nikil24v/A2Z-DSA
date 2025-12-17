#include<bits/stdc++.h>
using namespace std;

bool is_sort(int arr[],int n)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]<=arr[i+1])
        continue;
        else
        break;
    }

    if(i == n -1)
    return true;

    return false;
}

bool check_sorted(int arr[],int n)
{
    int times = n;
    while(times)
    {
        if(is_sort(arr,n))
        return true;
        else
        {
            int last = arr[n-1];

            for(int i=n-1;i>0;i--)
            arr[i] = arr[i-1];

            arr[0] = last;

            times--;
            continue;
        }
    }

    return false;
}
int main()
{
   int arr[] = {1,2,3,4,5};
   int n = sizeof(arr) / sizeof(arr[0]);

   bool res = check_sorted(arr,n);

   if(res)
   cout<<"Sorted"<<endl;
   else
   cout<<"Not Sorted"<<endl;

   return 0;
}