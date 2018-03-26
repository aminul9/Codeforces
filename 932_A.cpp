#include <iostream>
using namespace std;

int main()
{
	string am;
	
	cin>>am;
	int n=am.size();

	for(int i=n-2;i>=0;i--)
		am+=am[i];
	cout<<am;

	return 0;
}