#include <iostream>

using namespace std;

int main()

{
	long long copy,Orginal;
	cin>>copy>>Orginal;
	if (Orginal==0)
	{
		cout<<"No";return 0;
	}
	else if(Orginal==1)
		{
			if(copy==0)
				cout<<"Yes";
			else
				cout<<"No";
			return 0;
		}
		Orginal-=1;
		copy=copy-Orginal;
		if(copy<0)
			cout<<"No";
		else if(copy%2==0)
			cout<<"Yes";
		else cout<<"No"	;
	
	return 0;
}