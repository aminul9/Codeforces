#include <iostream>
#include <fstream>
using namespace std;

long  long revOutZero(long long n)
{

    long long ans=0;
    while(n!=0)
    {
        int temp=n%10;
        if(temp!=0)
        {
            ans=ans*10+temp;
            //cout<<ans<<" "<<n<<endl;
        }
        n=n/10;
    }
    return ans;
}

int main()
{

    long long a,b,c;
   // freopen("input.txt","r",stdin);
    cin>>a>>b;
    c=a+b;

    long long  na=revOutZero(a);

    na=revOutZero(na);

    long long  nb=revOutZero(b);
      nb=revOutZero(nb);

    long long  nc=revOutZero(c);
      nc=revOutZero(nc);

      //cout<<na<<" "<<nb<<" "<<nc<<endl;
      if(na+nb==nc)
        cout<<"YES";
      else cout<<"NO";

     // cout<<endl;



    return 0;
}
