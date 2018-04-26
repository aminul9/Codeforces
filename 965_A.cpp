#include <bits/stdc++.h>
using namespace std;

int main()
{

	//freopen("in.txt","r",stdin);
	long long k,n,s,p;
	cin>>k>>n>>s>>p;

	long long  oneManNeedPapre=ceil(n/(s*1.0));
	long long  totalNeed= oneManNeedPapre*k;
	long long needPaperPack=ceil(totalNeed/(p*1.0));
	cout<<needPaperPack<<endl;

	return 0;
}