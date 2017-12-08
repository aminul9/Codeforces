#include  <iostream>
#include  <map>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
     string str1;
     if(n==1) { cin>>str1 ;cout<<str1;}
     else {

        map< string, int >aminul;
        for(int i=1;i<=n;i++)
        {
            cin>>str1;
            if(aminul.find(str1)==aminul.end())
            {
             aminul[str1]=1;
            }
            else aminul[str1]++;
        }
            int ans=0;
         for(map<string ,int>::iterator it=aminul.begin();it!=aminul.end();++it)
         {
            if(it->second  > ans)
            {
                str1=it->first;
              ans=it->second;
            }
         }
         cout<<str1<<endl;
     }


    }
}
