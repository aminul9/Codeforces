#include <iostream>
using namespace std;
int main()
{

	//freopen("in.txt","r",stdin);
	int m,n;
	string  array[502];
	cin>>m>>n;

	for(int i=0;i<m;i++)
	{
		cin>>array[i];
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(array[i][j]=='W')
			{
				if(j!=0)
				{
					if(array[i][j-1]=='S')
					{
						cout<<"NO";
						return 0;
					}
					if(array[i][j-1]=='.')
						array[i][j-1]='D';
				}

				if(j+1<=n)
				{
					if(array[i][j+1]=='S')
					{
						cout<<"NO";
						return 0;
					}
					if(array[i][j+1]=='.')
					 array[i][j+1]='D';
				}
				

				if(i!=0)
				{
					if(array[i-1][j]=='S')
					{
						cout<<"NO";
						return 0;
					}
					if(array[i-1][j]=='.')
					array[i-1][j]='D';
				}
				 


				if(i+1<=m)
				{
					if(array[i+1][j]=='S')
					{
						cout<<"NO";
						return 0;
					}
					if(array[i+1][j]=='.')
					array[i+1][j]='D';
				}

			}



		}
	}

   cout<<"YES"<<endl;
   for(int i=0;i<m;i++)
   	cout<<array[i]<<endl;





	return 0;
}
