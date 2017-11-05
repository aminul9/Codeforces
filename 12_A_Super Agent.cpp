#include <iostream>
using namespace std;
string strrev(string am)
{
        string result="";
        for(int i=am.size()-1;i>=0;i--)
            result+=am[i];
        return  result;
}

int main()
{
        string a1,a2,a3,b1,b2,b3;
        cin>>a1>>a2>>a3;

        b1=strrev(a3);
        b2=strrev(a2);
        b3=strrev(a1);

        if(a1==b1 && b2==a2 && a3==b3)
        {
            cout<<"YES";
        }
        else
            cout<<"NO";
    return 0;
}
