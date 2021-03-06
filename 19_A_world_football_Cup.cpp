#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct Team{
	string name_;
	int pnts,sc,mis;
};
int n;
Team t[105];
void add(string &s,int a,int b)
{
	for (int i=0;i<n;i++)
	{
		if (t[i].name_==s)
		{
			if (a>b) t[i].pnts+=3;
			else if (a==b) t[i].pnts+=1;
			t[i].sc+=a;
			t[i].mis+=b;
			break;
		}
	}
}
bool less1(Team &a,Team &b)
{
	if (a.pnts!=b.pnts) return a.pnts>b.pnts;
	else if (a.sc-a.mis!=b.sc-b.mis) return a.sc-a.mis>b.sc-b.mis;
	else return a.sc>b.sc;
}
bool less2(Team &a,Team &b)
{
	return a.name_<b.name_;
}
int main()
{
    //freopen("input.txt","r",stdin);
	string a,b;
	int c,d;
	cin >> n;
	for (int i=0;i<n;i++)
	{
		cin >> t[i].name_;
	}
	cin.ignore();
	for (int i=0;i<n*(n-1)/2;i++)
	{
		getline(cin,a,'-');
		getline(cin,b,' ');
		scanf("%d:%d",&c,&d);
		cin.ignore();
		add(a,c,d);
		add(b,d,c);
	}
	sort(t,t+n,less1);
	sort(t,t+n/2,less2);
	for (int i=0;i<n/2;i++) cout << t[i].name_ << endl;
	return 0;
}
