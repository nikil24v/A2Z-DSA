#include<bits/stdc++.h>
using namespace std;

void rev(int arr[],int i,int j)
{
    if(i>=j)
    return;
    else {
    swap(arr[i],arr[j]);
    i++,j--;
    rev(arr,i,j);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    rev(arr,0,n-1);
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}