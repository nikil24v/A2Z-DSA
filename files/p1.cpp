#include<iostream>
#include<fstream>
using namespace std;

int main() {

    ifstream file("data.txt",ios::in);

    string line;

    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    file.close();

}