    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int row , col;
        cout<<"Enter the rows and cols: ";
        cin>>row>>col;


        int arr[row][col];
        int count = 0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>arr[i][j];
                count+= arr[i][j];
            }
        }

        // int count = 0;

        // for(int i=0;i<3;i++)
        // {
        //     for(int j=0;j<3;j++)
        //     {
        //         count+= arr[i][j];
        //     }
        // }    

        cout<<count<<endl;
    }