#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the limit"<<endl;
    cin>>n;

    bool temp = true;
    for(int i=0;i<n && i >= 0;) {

        for(int j=0;j<i+1;j++)
        cout<<"* ";

        cout<<endl;

        if(temp == true)
        {
            if(i == n - 1) {
            temp = false;
            i--;
            continue;
            }

            i++;
            continue;
        }
        i--;
    }

}