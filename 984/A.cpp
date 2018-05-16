#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);
	int n;
	int arr[1005];
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
		
		sort(arr,arr+n);
	n=ceil(n/2.0)-1;
	cout<<arr[n]<<endl;
	return 0;
}
