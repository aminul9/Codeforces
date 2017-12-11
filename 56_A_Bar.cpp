#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,ans1=0;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        string a;

        cin>>a;

        if(a[0]>=65 && a[0]<=90)
        {
            if(a=="ABSINTH" ||a=="BEER" || a=="BRANDY" ||a=="CHAMPAGNE"||a=="GIN" || a=="RUM"|| a=="SAKE"|| a=="TEQUILA"||a=="VODKA" ||a=="WHISKEY" ||a=="WINE")
            ans1++;
        }
        else{
            int sz=a.size();int ans=0;
            for(int i=0;i<sz;i++)
            {
                ans=ans*10+a[i]-48;
            }
            if(ans<18)
             ans1++;
        }
    }
    cout<<ans1;
    return 0;
}
