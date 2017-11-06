#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n,m1,top=0;
    string m[55];
    cin>>n>>m1;
    for(int i=0;i<n;i++)
    {
        cin>>m[i];
    }

    int start=INT_MAX,ends=0;

    for(int i=0;i<n;i++)
    {
        int fast=m[i].find('*');
            if(fast!=-1)
            {
                start=min(fast,start);
                for(int j=fast;j<m1;j++)
                {
                    if(m[i][j]=='*')
                    {
                    top=i;
                    ends=max(j,ends);
                    }
                }

            }


    }



    ends=ends-start+1;

   // cout<<start<<" "<<ends<<endl;
   int check=0;
    for(int i=0;i<=top;i++)
    {
        if(m[i].find("*")!=-1 || check==1)
        {
            check=1;

            cout<<m[i].substr(start,ends)<<endl;
        }
    }
    return 0;
}
