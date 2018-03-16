#include <iostream>
#include <fstream>

using namespace std;

int main()

{

	//freopen("in.txt","r",stdin);

	int n,count=0;
	cin>>n;
	for (int i=1; i<=n; ++i)
	{
		for(int j=i+1;j<=n;++j)
			{
				int temp;
				temp=i^j;
				if(temp>=i && temp>=j && temp<=n)
				{
					if(i+j> temp && j+temp>i && temp+i>j)
					{
						//cout<<i<<" "<<j<<" "<<temp<<endl;
						count++;
					}
				}
			}
	}
	cout<<count;
	return 0;
}