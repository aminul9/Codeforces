#include <iostream>
#include <fstream>
using namespace std;
long long array[100];

int main()
{
	//freopen("in.txt","r",stdin);
    long long k,n;
    cin>>n>>k;
    
    for(long long j=2;j<=k;j++)
    {
        if( array[n%j]==1 || j==50)
        {
            cout<<"No";
            return 0;
        }
       else
       {
       	array[n%j]=1;
       } 
    }
    cout<<"Yes";
    return 0;
}