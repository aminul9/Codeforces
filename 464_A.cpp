#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    int array[5002];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>array[i];
    }
    bool check=false;

    for(int i =1;i<=n;i++)
    {

        int x=array[i];
        int y=array[x];
        int z=array[y];
        if(x==array[z])
            {
            cout<<"YES";
            check=true;
            break;

            }

    }
    if(check==false)
        cout<<"NO";
    return 0;
}
