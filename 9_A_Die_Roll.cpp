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
    int n,m;
    cin>>n>>m;
    int big=max(n,m);
    int rest=6-big+1;
    int gcdv=gcd(6,rest);
    cout<<rest/gcdv<<"/"<<6/gcdv;

    return 0;
}
