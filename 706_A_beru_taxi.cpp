#include <iostream>
#include <climits>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    double ans=LONG_MAX;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        double x1,y1,z;
        cin>>x1>>y1>>z;

        double temp=sqrt((a-x1)*(a-x1)+(b-y1)*(b-y1))/z;
        if(ans>temp)ans=temp;

    }
    cout<<fixed<<setprecision(20)<<ans;
    return 0;
}
