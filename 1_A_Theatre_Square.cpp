#include <iostream>
using namespace std;

int main()
{
    long long n,m,a;
    long long ans1=0,ans2=0;
    cin>>n>>m>>a;

    if(n%a==0)
        ans1=n/a;
    else
        ans1=n/a +1;

    if(m%a==0)
        ans2=m/a;
    else
        ans2=m/a+1;

    if(ans1==0)
        ans1=1;
    if(ans2==0)
        ans2=1;
    cout<<ans1*ans2;
    return 0;
}
