#include <iostream>
#include <fstream>
#include <ctype.h>
#include <algorithm>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	int num1=0,num2=0,num3=0,temp=0;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		if(temp==1)num1++;
		else if(temp==2)num2++;
		else num3++;
	}

	num1=max(num1,max(num2,num3));
	cout<<n-num1;
	return 0;
}