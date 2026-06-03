#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[] = {'a','$','c','%','e','1'};

    // int n = sizeof(str) / sizeof(str[0]);
    int n = strlen(str);
    int slow = 0;

    for(int fast = 0;fast<n;fast++)
    {
        if(str[fast]>='a' && str[fast]<= 'z')
        {
            swap(str[slow],str[fast]);
            slow++;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<endl;
}