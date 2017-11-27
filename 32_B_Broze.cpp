#include <iostream>
using namespace std;

int main()
{
    string am;
    cin>>am;
    for(int i=0;i<am.size();i++)
    {
        if(am[i]=='.')
          cout<<0;
        else if(am[i]=='-' and am[i+1]=='.')
        {
            cout<<1;
            i++;
        }
        else if(am[i]=='-' and am[i+1]=='-')
        {
            cout<<2;
            i++;
        }

    }
    return 0;
}
