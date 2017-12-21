#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool chk=false;
    for(int i=1;i<=n;i++)
    {
        int n;
        cin>>n;
        if(n==1)chk=true;
    }
    if(chk==true)
        cout<<-1;
    else cout<<1;
    return 0;
}
