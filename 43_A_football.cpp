#include <iostream>
#include <set>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    cin>>ws;
    set<string>am;
    for(int i=1;i<=n;i++)
    {
        string am1;
        getline(cin,am1);
        am.insert(am1);
    }
    cout<<am.size();
  return 0;
}
