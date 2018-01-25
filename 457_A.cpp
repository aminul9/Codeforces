#include <iostream>
using namespace std;

int main()
{
	int x,hh,mm;
	cin>>x>>hh>>mm;
	int y=0;
	while(!(hh%10== 7 || mm%10==7))
	{
		y++;
		if(mm-x>=0)
			mm-=x;
		else
		{
			mm=mm+60-x;
			if(hh-1>=0)hh-=1;
			else
			{
				hh=hh+24-1;
			}
		}
	}
	cout<<y;
	return 0;
}