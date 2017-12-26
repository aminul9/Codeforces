#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	
	double d,r;
	cin>>r>>d;

	int ans=0;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		double x,y,r1;
		cin>>x>>y>>r1;

		double dis=sqrt(x*x + y*y);
		
		if( (r>=(dis+r1)) && (r-d)<=(dis-r1) )ans++;


	}
	cout<<ans<<endl;

	return 0;
}