#include <iostream>
#include <cstring>
#include <fstream>
#include <cmath>
using namespace std;

int array[3010];
void shive()
{
	int n=3005;

	for(int i=2;i<=sqrt(3000)+1;i++)
	{
		if(array[i]==0)
		for(int j=i*i;j<3001;j+=i)
		{
			array[j]=1;
		}

	}
}

int main(int argc, char const *argv[])
{
	 shive();
	 int n,ans=0;
	 cin>>n;
	 if(n<=5)
	 cout<<0;
	 else{
        for(int i=2;i<=n;i++)
        {
          int  k=0;
            for(int j=2;j<=i;j++)
            {
                if(array[j]==0)
                {
                    if(i%j==0)
                    k++;
                }
            }
            if(k==2)
                ans++;
        }
        cout<<ans<<endl;

	 }




	return 0;
}
