#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	 //freopen("in.txt","r",stdin);
	string a,b;
	cin>>a>>b;
	sort(a.begin(),a.end());
	for(int i=0;i<a.size();i++)
	{
		for(int j=0;j<a.size();j++)
		{
			string s=a;
			swap(a[i],a[j]);
			if(stoll(a) > stoll (s) && stoll(a)<= stoll (b))
				continue;
			else 
				swap(a[i],a[j]);

		}
	}
	
	cout<<a<<endl;
	return 0;
}
