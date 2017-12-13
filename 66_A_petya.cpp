#include <iostream>
using namespace std;

int main()
{
    string in;
        cin>>in;
        int n=in.size();
        if(in[0]=='-')n--;


        //cout<<inputdata;
        string main="9223372036854775807";

        string mainneg="-9223372036854775808";


        if(n<=10)
        {
            long long ans=0;
            for(int i=0;i<in.size();i++)
            {
                if(in[i]=='-')continue;
                ans=ans*10+(in[i]-48);
            }
            if(in[0]=='-') ans*=-1;
            //cout<<ans;

            if(ans>=-128 && ans<=127)cout<<"byte";
            else if(ans>=-32768 && ans<=32767)cout<<"short";
            else if(ans>=-2147483648 && ans<=2147483647)cout<<"int";
            else cout<<"long";
        }
        else
        {

            if(n<19)
            {
                cout<<"long";
            }
            else if(n>19)
            {
                cout<<"BigInteger";
            }
            else{
                        int check=0;
                        if(in[0]=='-')
                        {
                              for(int i=1;i<20;i++)
                                {

                                    if(in[i]<mainneg[i])
                                    {
                                        cout<<"long";return 0;
                                    }

                               else if(in[i]>mainneg[i])
                                {
                                    cout<<"BigInteger";return 0;
                                }
                                }
                            cout<<"long";
                        }

                        else
                        {
                            for(int i=0;i<19;i++)
                            {

                                if(in[i]<main[i])
                                    {
                                        cout<<"long";return 0;
                                    }
                                if(in[i]>main[i])
                                {

                                    cout<<"BigInteger";return 0;
                                }
                            }
                            cout<<"long";
                        }
            }


        }

     return 0;
}
