#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input_string;
    while(cin>>input_string){
    //cin>>input_string;

    int length=input_string.size();
    int ans=0;

    for(int k=0;k<length-1;k++)
      {
       for(int i=length-1;i>=0;i--)
        {
                string sub=input_string.substr(k,i);
                    bool check=false;
                        for(int j=k+1;length>j+sub.size()-1;j++)
                            {
                                int n=input_string.find(sub,j);

                                    if(n!=-1)
                                        {

                                            check=true;
                                                int temp=sub.size();
                                                if(temp>ans)
                                                    ans=temp;
                                                break;
                                            }
                                }
                if(check==true)
                break;
        }
        }
        cout<<ans<<endl;
    }
    return 0;
}
