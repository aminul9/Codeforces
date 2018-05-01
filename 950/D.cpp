#include <bits/stdc++.h>  //For CodeForces only
using namespace std;
typedef long long LL;


int main()
{
    LL n;
    int q;
    scanf("%I64d%d",&n,&q);
    while(q--)
    {
        LL x;
        scanf("%I64d",&x);
        if(x%2)
            printf("%I64d\n",(x+1)/2);
        else
        {
            while(x%2==0)
                x+=(n-x/2);
            printf("%I64d\n",x/2+1);
        }
    }
    return 0;
}
