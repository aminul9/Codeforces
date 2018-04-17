#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	//freopen("in.txt","r",stdin);
	int ans=0,n;
	string inputstring;
	cin>>n;
	cin>>inputstring;
	
	

	for(int i=0;i<n;i++)
	{
		if(i < (n-1))
		{
			if(inputstring [i]=='U' && inputstring[i+1]=='R')
				i++;
			else if(inputstring [i]=='R' && inputstring[i+1]=='U')
				i++;
		}
		ans++;
		//cout<<i<<" "<<ans<<endl;

	}
	cout<<ans;
	return 0;
}