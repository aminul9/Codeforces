/*_ _ _ _ _ _ _ _ _ _
|                   |
| Md:Aminul islam   |
| DUET,CSE_15       |
|_ _ _ _ _ _ _ _ _ _|
*/


#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    int n,k;
    cin>>n>>k;
    int arr[1000000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    if(k==0)
    {
        if(arr[0]==1)
            cout<<-1;
        else
            cout<<arr[0]-1;
    }
    else if(arr[k]!=arr[k-1])
    {
        cout<<arr[k-1];
    }
    else
        cout<<-1;



    return 0;
}
