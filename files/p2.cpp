#include<bits/stdc++.h>
using namespace std;

int main() {

    string details;
    cout<<"Enter Your Name and Age"<<endl;
    cin>>details;

    fstream file;
    file.open("data.txt",ios::out);

    file << details << endl;

    file.close();

    file.open("data.txt",ios::in);
    
}