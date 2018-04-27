#include <bits/stdc++.h>

using namespace std;

int main()
{

//freopen("in.txt","r",stdin);
	int n,d;
	cin>>n>>d;
	int arry[105];
	for(int i=0;i<n;i++)
			cin>>arry[i];



		sort(arry,arry+n);


	 int ans=INT_MAX;


				 for(int i=0;i<n;i++)
					 {
					     int temp=0,p=0;

									 	for(int j=n-1;j>=0;j--)
				                        {
				                            if(  abs(arry[i]-arry[j]) <= d )
				                              {  
				                               		int temp1=arry[j];
				                               		while(abs(temp1-arry[j])<=d)
				                               		{
				                               			temp++;
				                               			j--;
				                               			if(j<0) break;
				                               		}
				                               		break;
					                          }
					                      
				                        }
                        temp=n-temp;
                        ans=min(ans,temp);
                      



					 }
				cout<<ans<<endl;
		return 0;
}
