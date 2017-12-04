#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int m,n;
    while(cin>>n>>m)
    {
        int array[1005];
        for(int i=0;i<n;i++) cin>>array[i];
        sort(array,array+n);
        int ans=0;

        for(int i=0;i<m;i++)
        {
            if(array[i]<0)
                ans+=array[i];
        }

        cout<<abs(ans)<<endl;

    }

    return 0;
}
