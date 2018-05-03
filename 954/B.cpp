/*----------------
|				 |
| MD.AMinul islam|
| DUET,CSE_15    |
|				 |
-------------------
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);
	int n;
	string ss;
	cin>>n>>ss;
	ss="#"+ss;
	ss=ss+"#"; 
	int limit=n/2,ans=0;


	for(int i=1;i<=limit;i++)
	{
		int m=1,cnt=0;
		for(int k=i+1; k<=i+i && ss[k]!='#';k++)
		{
			if(ss[m]==ss[k])
			{
				cnt++;
				m++;
			}
			else
				break;

		}
		if(i==cnt)
			{
				//cout<<cnt <<" "<<m<<endl;
				ans=max(ans,cnt);
			}
	}
	if(ans==0)
		cout<<n;
	else
	cout<<n-ans+1;

	return 0;
}
