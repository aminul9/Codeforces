/*_ _ _ _ _ _ _ _ _ _
|                   |
| Md:Aminul islam   |
| DUET,CSE_15       |
|_ _ _ _ _ _ _ _ _ _|
*/


#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    string str;
    while(cin>>str)
    {
       // cout<<str;
        int link=0,pearl=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='-')
                link++;
            else
                pearl++;
        }
        if(link==0 or pearl==0)
            cout<<"YES"<<endl;
        else if( (link/pearl)*pearl  ==link)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}
