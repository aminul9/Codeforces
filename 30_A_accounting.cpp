#include <iostream>
#include <fstream>
using namespace std;
long long power( long long base,long long exponent)
{
    long long ans=1;
    for(int i=1;i<=exponent;i++)
    {
        ans*=base;
    }
    return ans;
}
int main()
{
   // freopen("input.txt","r",stdin);
    int a,n,b;
    while(cin>>a>>b>>n){

    if(a==0 && b==0)
        cout<<5;
    else if(a==0 )
    {
        cout<<"No solution";
    }
    else if(b==0)
    {
        cout<<0;
    }
    else if(b%a==0)
    {
        b=b/a;
        if(b<0)
        {
                        int ans=1;
                    for(int i=1;;i++)
                    {
                        if(b==power(-i,n))
                        {
                            cout<<-i;
                            break;
                        }
                        else if(b>power(-i,n))
                        {
                            cout<<"No solution";
                            break;
                        }
                    }
        }
        else if(b>0)
        {
                            int ans=1;
                    for(int i=1;;i++)
                    {
                        if(b==power(i,n))
                        {
                            cout<<i;
                            break;
                        }
                        else if(b<power(i,n))
                        {
                            cout<<"No solution";
                            break;
                        }
                    }
        }

    }
    else{
        cout<<"No solution";
    }
    cout<<endl;
}
 return 0;
}