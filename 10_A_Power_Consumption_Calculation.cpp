#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int n,p1,p2,p3,t1,t2;
    while(cin>>n>>p1>>p2>>p3>>t1>>t2){
            int st,et,st1,et1;
            cin>>st>>et;
            int dist=et-st;
            int ans= dist*p1;

            for(int i=1;i<n;i++)
                {
                cin>>st1>>et1;
                ans+=(et1-st1)*p1;
                dist=st1-et;
                if(t1>=dist)
                {
                    ans+=p1*dist;
                }
            else
            {
                ans+=p1*t1;
                dist-=t1;
                if(t2>=dist)
                {
                    ans+=p2*dist;
                }
                else
                {
                    ans+=p2*t2;
                    dist-=t2;
                    ans+=dist*p3;
                }
            }
        et=et1;
    }
    cout<<ans<<endl;
}

    return 0;
}
