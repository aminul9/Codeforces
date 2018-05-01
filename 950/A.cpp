#include <iostream>
using namespace std;

int main()
{
    int l1,r2,a;
    cin>>l1>>r2>>a;
    int l=min(l1,r2);
    int r=max(l1,r2);
    if(r-l >=a)
    {
        cout<<(l+a)*2;
    }
    else if(r-l<a)
    {
        int diff=r-l;
        l+=diff;
        a=a-diff;
        a/=2;
        l+=a;
        cout<<l*2;
    }
    else
    {
        a=a/2;
        l=l+a;
        cout<<l*2;
    }


    return 0;
}
