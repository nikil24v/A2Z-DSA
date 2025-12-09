#include<iostream>
using namespace std;

int main()
{

    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;

    int i = 0;
    for(i=2;i<num;i++)
    {
        if(num % i == 0)
        break;
    }

    if(i == num)
    cout<<"It is a prime number"<<endl;
    else
    cout<<"It is not a prime"<<endl;

    return 0;
}