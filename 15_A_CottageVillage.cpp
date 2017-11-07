#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int n,t;
    int ans=2;
    cin>>n>>t;
    vector< pair <double,double> >am;
    for(int i=1;i<=n;i++)
    {
        double x,length;
        cin>>x>>length;
        double temp1=x-(length/2.0);
        double temp2=x+(length/2.0);

        am.push_back(make_pair(temp1 ,temp2 ));
    }
    sort(am.begin(),am.end());

    for(int i=0;i<am.size()-1;i++)
    {
        if(am[i+1].first - am[i].second >t)
            ans+=2;
        else if(am[i+1].first - am[i].second ==t)
            ans+=1;
    }

    cout<<ans<<endl;
    return 0;
}
