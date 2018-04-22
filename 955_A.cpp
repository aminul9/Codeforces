#include <bits/stdc++.h>

using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);
	int hh,mm;
	double h,d,c,n,ans1=0,ans2=0;;

	cin>>hh>>mm>>h>>d>>c>>n;

	cout<<fixed<<setprecision(4);
	if(hh>=20)
	{
		h=ceil(h/n);
		h=h*c;
		cout<<h-(h*.2);
	}

	else
	{
			ans1=ceil(h/n)*c;
			mm=60-mm; 		//need miniute to go next hour
			hh=20-(hh+1) ;   //
			hh=(hh*60)+mm;  //total time in miniute

			hh=(hh*d)+h; //hh=number of hunger
			hh=ceil(hh/n);
			ans2=hh*c;
			//cout<<ans2<<" ";
			ans2=ans2-(ans2*20/100.0);
			cout<<min(ans1,ans2);

	}

	return 0;
}
