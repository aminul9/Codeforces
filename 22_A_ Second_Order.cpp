#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int holder[105];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>holder[i];

    sort(holder,holder+n);

    int m=0;
    for(int i=0;i<n-1;i++)
    {
        if(holder[i]<holder[i+1])
        {
            m=holder[i+1];
            break;
        }
    }
    if(m==0)
    cout<<"NO";
    else
    cout<<m;


    return 0;
}
