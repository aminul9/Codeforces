#include <iostream>
#include <map>
using namespace std;

int main()
{
    string am;
    map <string ,int> ss;
    int ans=0;
    while (getline(cin,am) && am.size()!=0)
    {
        string am1;
        if(am[0]=='+')
        {
            am1="";
            for(int i=1;i<am.size();i++)
            {
                am1+=am[i];
            }
            ss[am1]=1;
        }

        if(am[0]=='-')
        {
            am1="";
            for(int i=1;i<am.size();i++)
            {
                am1+=am[i];
            }
            ss.erase (am1);

        }
        else{
                am1="";
                int check=0;
                for(int i=0;i<am.size();i++)
                {
                    if(am[i]==':')
                    {
                        check=1;
                        continue;
                    }
                    if(check==1)
                    {
                        am1+=am[i];
                    }
                }
                int str_size=am1.size();
                int mapsize=ss.size();
                ans+=str_size*mapsize;

        }


    }
    cout<<ans<<endl;
    return 0;
}
