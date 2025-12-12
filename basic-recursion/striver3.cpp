#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    
    if(n == 0)
    return 0;

    return n + sum(n - 1);
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int res = sum(n);
    cout<<res<<endl;
}

/*
    SUM OF FIRST N NUMBERS USING RECURSION

    How the recursion works (simple explanation):

    Example: n = 5
    We want: 5 + 4 + 3 + 2 + 1

    sum(5)
      = 5 + sum(4)
                 |
                 v
    sum(4)
      = 4 + sum(3)
                 |
                 v
    sum(3)
      = 3 + sum(2)
                 |
                 v
    sum(2)
      = 2 + sum(1)
                 |
                 v
    sum(1)
      = 1 + sum(0)

    Base case:
    sum(0) = 0   // stops recursion

    Final result builds back up:
    sum(1) = 1 + 0     = 1
    sum(2) = 2 + 1     = 3
    sum(3) = 3 + 3     = 6
    sum(4) = 4 + 6     = 10
    sum(5) = 5 + 10    = 15

    In short:
    return n + sum(n - 1);
    // means: add current number to the sum of smaller numbers
*/
