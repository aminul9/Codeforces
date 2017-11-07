#include <iostream>
#include <map>
using namespace std;

typedef long long LL;
int n,m,x[1020];
string s[1020]; map<string,int>p,p1;
int main(){

	cin>>n;
	for(int i=0;i<n;++i){
		cin>>s[i]>>x[i]; p[s[i]]+=x[i];
	}
	for(int i=0;i<n;++i) m=max(m,p[s[i]]);
	for(int i=0;i<n;++i){
		if(p[s[i]]>=m && p1[s[i]]+x[i]>=m) {
			cout<<s[i]; break;
		}
		p1[s[i]]+=x[i];
	}
	return cout<<endl,0;
}
