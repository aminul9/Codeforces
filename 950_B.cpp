#include <iostream>
#include <fstream>
#include <queue>
using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);
	int temp,n,m;
    queue <int>q1;
    queue <int>q2;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		q1.push(temp);

	}
	for(int j=0;j<m;j++)
	{
		cin>>temp;
		q2.push(temp);
	}

	long long ans1=0,ans2=0,count=0;

    while(!q1.empty() || !q2.empty())
    {
    	if(ans2==0 && ans1==0)
    	 {
    	 	if(!q1.empty())
    	 	{
    	 	 	ans1+=q1.front();
    	 		q1.pop();

    	 	}
    	  
    	  if(!q2.empty())
    	  {
    	  		ans2+=q2.front();
    	  		q2.pop();
    	  }
    	   
    	  
    	   
    	 }
    	 else if(ans1>ans2)
    	 {
    	 	if(!q2.empty())
    	  	{
    	  		ans2+=q2.front();
    	  		q2.pop();
    	  	}
    	   
    	 }
    	 else if(ans1<ans2)
    	 {
    	 	
    	 	if(!q1.empty())
    	 	{
    	 	 	ans1+=q1.front();
    	 		q1.pop();

    	 	}
    	  
    	 }

    	if(ans1!=0 && ans1==ans2)
    	{
    		count++;
    		//cout<<ans1<<" "<<ans2<<endl;
    		ans2=0;
    		ans1=0;
    	}

    }
    cout<<count;

	
	return 0;
}