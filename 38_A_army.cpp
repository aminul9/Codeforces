#include   <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int arra[105];
        for(int i=1;i<n;i++) cin>>arra[i];
        int a,b;
        cin>>a>>b;
        int dist=b-a;
        int ans=0;
        for(int i=1;i<=dist;i++)
        {
         ans+=arra[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
