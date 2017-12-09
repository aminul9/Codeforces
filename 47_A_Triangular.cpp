#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int n;
	//freopen("input.txt","r",stdin);
	while(cin>>n){
	int ans=0;
	for(int i=1;;i++)
	{
		if(n==ans) {cout<<"YES"; break;}
		else if(n<ans){cout<<"NO";break;}
		else ans+=i;
	}
}
	return 0;
}