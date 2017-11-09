#include <iostream>
#include <fstream>
using namespace std; 

int arrar[1050];
 
 void shive(int n)
 {
 	for(int i=0;i<n;i++)
 		arrar[i]=i;

 	for(int i=2;i<n;i++)
 	{
 		if(arrar[i]!=0)
 		{
 			for(int j=i*i;j<n;j+=i)
 			{
 					arrar[j]=0;
 			}
 		}
 	}
 }

int main(int argc, char const *argv[])
{
	shive(1050);
	//freopen("input.txt","r",stdin);
	int n,k;
	cin>>n>>k;

	int cnt=0;

	for(int i=10;i<=n;i++ )
	{
		if(arrar[i]!=0)
		{
			bool check=false;
			for(int j=2;j<i/2;j++)
			{
				int a,b;
				if(arrar[j]!=0)
				{
					
					a=j;

					for(int k=j+1;i/2;k++)
					{
						if(arrar[k]!=0)
						{
							b=k;
							break;
						}
					}
				}
				if(a+b+1==i)
				{
					cnt++;
					break;
				}


			}
		}


		
		if(cnt==k)
			break;
	}



	if(cnt==k)
		cout<<"YES";
	else
		cout<<"NO";

	return 0;
}