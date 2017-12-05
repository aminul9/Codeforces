#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    string ans;
    cin>>ans;
    int k=ans.find('1');
    ans.erase(0,k);
    k=ans.rfind('1');
    ans.erase(k+1);

    for(int i=0;i<ans.size();i++)
    {
        if(ans[i]=='1' and i==ans.size()-1)
        {cout<<"YES";return 0;}
        if(ans[i]=='0')
        break;
    }

    int length1=ans.find('0');
    int length2=ans.find('1',length1);
    length2=length2-length1;

   // cout<<ans<<endl;
   //cout<<length1<<" **** "<<length2<<endl;
   int check=1;
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i]=='1')
        {
            if(check==0){cout<<"NO";return 0;}
            if(i+length1-1>=ans.size())
                {cout<<"NO";return 0;}

            for(int j=1;j<=length1;j++,i++)
            {
                if(ans[i]!='1'){cout<<"NO";return 0;}
            }
            check=0;

        }
        else{
                if(check==1)
                {
                cout<<"NO";return 0;
                    }

            if(i+length2-1>=ans.size())
                {cout<<"NO";return 0;}

            for(int j=1;j<=length2;j++,i++)
            {
                if(ans[i]!='0'){cout<<"NO";return 0;}
            }
            check=1;

        }
        i--;
    }
    cout<<"YES";

    return 0;
}
