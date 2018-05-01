/*___________________
|					|	
|MD: Aminul islam   |
|DUET,CSE_15		|
|					|		
|___________________|
*/

#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
	if(a%b==0)
		return b;
	return gcd(b,a%b);

}

int main()
{
	//freopen("in.txt","r",stdin);
	int n,num1=0;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
		{
			cin>>array[i];
			if(array[i]==1)
				num1++;
		}

	int ans=1e9;



	if(num1!=0)
	{
		cout<<n-num1;
		return 0;
	}

	for(int i=0;i<n;i++)
	{
		int temp=array[i];
		for(int j=i+1;j<n;j++)
		{

			temp=gcd(temp,array[j]);
			if(temp==1)
			{
				ans=min(ans,j-i);
				break;
			}
		}
	}

	if(ans==1e9)
		cout<<-1;
	else
		cout<<ans+n-1;
	return 0;
}
