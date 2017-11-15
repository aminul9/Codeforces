#include <iostream>
#include <fstream>

using namespace  std;

						//---------Aminul--------------//

int main()
{

	//freopen("input.txt","r",stdin);	
	int n;
	while(cin>>n){

	int cnt=0,odd,even;
	for(int i=1;i<=n;i++)
	{
		int temp;
		cin>>temp;
		if(temp%2==0)
		{
			cnt++;
			even=i;
		}
		else
			odd=i;

	}
	if(cnt==1)
		cout<<even;
	else
		cout<<odd;
	cout<<endl;
 }

	return 0;
}