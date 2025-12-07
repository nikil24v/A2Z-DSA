#include<iostream>
using namespace std;

bool pallindrome(string str,int i,int j) {

    if(i>=j)
    return true;

    if(str[i] == str[j])
    {
        return pallindrome(str,i + 1,j -1);
    }
    
    return false;
}
int main() {
    
    string str;
    cout<<"Enter the string"<<endl;
    cin>>str;

    int i = 0;
    int j = str.size();
    auto res = pallindrome(str,i,j-1);
    cout<<boolalpha<<res<<endl;
}