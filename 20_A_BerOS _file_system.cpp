#include<bits/stdc++.h>

using namespace std;
///----------------------------------------------------------------------------------------------
#define FastRead        ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define fRead(x)        freopen(x,"r",stdin)
///--------------------------------------------------aminul---------------------------------------------------


int main()
{
   FastRead
   //fRead("input.txt");
   string dir;
   while(cin>>dir){
   int dir_len=dir.size();
    string am;
    bool chk=false;
   for(int i=0;i<dir.size();i++)
   {
   		am+=dir[i];
   		if(dir[i]!='/')
   		  chk=true;


   		if(dir[i]=='/')
   		{
   			while(dir[i]=='/' && i< dir_len)
   				i++;
   			i--;
   		}

   }
   if(chk==false)
        cout<<am;
    else{

            int n=am.size();
            if(am[n-1]=='/')
            am.erase(n-1);
            cout<<am;

    }
    cout<<endl;
}
   return 0;


}
