#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string input;
	cin>>input;
	vector<int>ans[300000];
	int x=0,size,c=0;
	size=input.size();

	for(int i=0;i<size;i++)
	{
		if(input[i]=='0')
		{
				ans[x++].push_back(i+1);
		}
		else
		{
			if(x==0)
			{
				cout<<-1;
				return 0;
			}
			else 
				ans[--x].push_back(i+1);
		}
		c=max(c,x);

	}
	if(c!=x){
		cout<<-1;
		return 0;
	}
	cout<<x<<endl;
	for(int i=0;i<x;i++)
	{
		int n=ans[i].size();
		cout<<n<<endl;
		for(int j=0;j<n;j++)
			cout<<ans[i][j]<<" ";
		cout<<endl;
	}

	return 0;
}
