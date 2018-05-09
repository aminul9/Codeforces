/*__________________
|					|
|					|
| Md.Aminul islam	|
|	DUET,CSE_15		|
|___________________|
*/

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);
	int n;
	string ss;
	cin>>n>>ss;
	map<string ,int>m;
	int cnt=0;
	string ans=ss.substr (0,2);
	for(int i=0;i<n;i++)
	{
		string temp;
		temp= ss.substr (i,2);
		//cout<<" "<<temp<<" ";
        
		if(m.find(temp)==m.end())
			{
				m[temp]=1;
			}
		else
			{
				m[temp]++;
				if(cnt < m[temp] )
				{
					cnt=m[temp];
					ans=temp;
				}
			}
	}
		cout<<ans;
	return 0;
}
