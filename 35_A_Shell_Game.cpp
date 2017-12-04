#include <iostream>
#include <fstream>
using namespace std;

int main()
{
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
    int n ;
    while(cin>>n){

    int glass1,glass2;

    cin>>glass1>>glass2;

    if(n==glass1 || n==glass2)
    {
        if(n==glass1)
        {
            n=glass2;
        }
        else
        n=glass1;
    }
    cin>>glass1>>glass2;

    if(n==glass1 || n==glass2)
    {
        if(n==glass1)
        {
            n=glass2;
        }
        else
        n=glass1;
    }
    cin>>glass1>>glass2;

    if(n==glass1 || n==glass2)
    {
        if(n==glass1)
        {
            n=glass2;
        }
        else
        n=glass1;
    }

    cout<<n<<endl;}
    return 0;
}
