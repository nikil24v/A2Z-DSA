#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    string str = to_string(num);
    cout<<str<<endl;

    int i=0;
    int j=str.length() - 1;

    for(;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        break;
    }

    if(i>=j)
    {
        cout<<"It is a Pallindrome!"<<endl;
    }
    else
    {
        cout<<"Not a Pallindrome!"<<endl;
    }
    
}