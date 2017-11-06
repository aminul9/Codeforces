#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a%b==0)
        return b;
     return gcd(b,a%b);
}
int main()
{
    int n;
    cin>>n;
    int  ans=0;
    for(int i=2;i<n;i++)
    {

        int m=n;
        while(m!=0)
        {
            int mode;
            mode=m%i;
            m/=i;
            ans+=mode;
        }

    }

    int g=gcd(ans,n-2);
    cout<<ans/g<<"/"<<(n-2)/g;
    return 0;
}
