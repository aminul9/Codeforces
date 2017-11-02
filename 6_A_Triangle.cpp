#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[5];
    for(int i=0;i<4;i++)
        cin>>a[i];
    sort(a,a+4,greater<int>());

    if( (a[0]+a[1]> a[2] && a[0]+a[2] >a[1] && a[1]+a[2]>a[0]) || (a[1]+a[2]>a[3] && a[1]+a[3]>a[2] && a[2]+a[3]>a[1]))
        cout<<"TRIANGLE";


    else if( (a[0]==a[1]+a[2]) || (a[1]==a[2]+a[3]))
        cout<<"SEGMENT";
    else
        cout<<"IMPOSSIBLE";

        return 0;
}
