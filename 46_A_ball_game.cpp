#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	int j=1;
	for(int i=1;i<n;i++)
	{
		j+=i;
		if(j>n)
			j-=n;
		if(i==n-1)
		  cout<<j;
		else cout<<j<<" ";
	}

	return 0;
}