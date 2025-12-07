#include<bits/stdc++.h>
using namespace std;

int main() {
    
   	int r,c;
	cout<<"Enter the ros and columns"<<endl;
	cin>>r>>c;


	int **p = new int*[r];
	for(int i=0;i<r;i++)
	{
		p[i] = new int[c];
	}

	if(p == nullptr)
	{
		cerr<<"Memory Allocation Failed"<<endl;
		return 0;
	}

	cout<<"Enter the Elements.."<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>p[i][j];
		}
	}

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<p[i][j]<<" ";
		}
		cout<<endl;
	}

	for(int i=0;i<r;i++)
	delete []p[i];

	delete []p;
	return 0;
}
