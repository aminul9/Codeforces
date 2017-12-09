#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	string ans;
	getline(cin,ans);

	int n=ans.size();
	for(int i=n-1;i>=0;i--)
	{
		if(isalpha(ans[i]))
		{
		if(ans[i]=='A' || ans[i]=='a'|| ans[i]=='E' || ans[i]=='e' ||ans[i]=='I' || ans[i]=='i' ||ans[i]=='O'||ans[i]=='o'||ans[i]=='U'||ans[i]=='u'||ans[i]=='Y'||ans[i]=='y')
		  cout<<"YES";
		  else cout<<"NO";
		  break;	
		}
	}
	return 0;
}