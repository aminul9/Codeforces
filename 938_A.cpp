#include <iostream>
#include <fstream>
#include <queue>
using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);
	int n;
	cin>>n;
	string am;
	cin>>am;

	string ans;
	ans+=am[0];
	for(int i=1;i<am.size();i++)
	{
			if((ans[ans.size()-1]=='a' || ans[ans.size()-1]=='e'||ans[ans.size()-1]=='i'||ans[ans.size()-1]=='o'||ans[ans.size()-1]=='u'||ans[ans.size()-1]=='y') && (am[i]=='a'||am[i]=='e'||am[i]=='i'||am[i]=='o'||am[i]=='u'||am[i]=='y'))
				continue;
			else 
				ans+=am[i];
	}
	cout<<ans;
	
	return 0;
}