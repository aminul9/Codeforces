#include <bits/stdc++.h>

using namespace std;

int main()
{
       string am;
//      while( cin>>am){
        cin>>am;

       int m=am.find('@');
       int n=am.find('@',m+1);
       bool check=false;

       if(m==-1 ||  n>-1 || m==0 || m==(am.size()-1) ) check=true;


       int k=am.find("..");
        if(k>-1)check=true;

       k=am.find("//");
            if(k>-1)check=true;
        k=am.find("..");
            if(k>-1)check=true;
        k=am.find("@.");
            if(k>-1)check=true;

        k=am.find("/.");
             if(k>-1)check=true;

         k=am.find("./");
                if(k>-1)check=true;


       if(am[am.size()-1]=='.')
            check=true;

            if(am[am.size()-1]=='_')
            check=true;

        if(am[am.size()-1]=='/')
            check=true;


       if(check==false)
       {
            for(int i=0;i<m;i++)
            {
                if(!isalnum(am[i]) && am[i]!='_')
                {check=true; break;}
            }
       }

       if(check==false)
       {
            int n=am.find('/');
            if(n>-1){
                for(int i=m+1;i<n;i++)
                {
                if(!isalnum(am[i]) && am[i]!='_' && am[i]!='.')
                    {check=true;break;}
                }
            }
            if(n==-1)
            {
                for(int i=m+1;i<am.size();i++)
                {
                    if(!isalnum(am[i]) && am[i]!='_' && am[i]!='.')
                    {check=true;break;}
                }
            }

            if(n>-1)
            {
                for(int i=n+1;i<am.size();i++)
                {
                    if(!isalnum(am[i]) && am[i]!='_')
                    {check=true;break;}
                }
            }

       }


       if(check==false)
       cout<<"YES";
       else
       cout<<"NO";
       cout<<endl;
//       }


    return 0;
}
