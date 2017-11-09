#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;

    bool check=false;
    string olds,news;


    cin>>olds;
    for(int i=1;i<m;i++)
    {
        if(olds[0]!=olds[i])
        {
            check=true;
            break;
        }
    }



    for(int i=1;i<n;i++)
    {
        cin>>news;
        if(check==true)
            continue;

        for(int j=1;j<m;j++)
        {
            if(news[0]!=news[j])
            {
                check=true;
                break;
            }
        }
        if(check==false)
        {
            if(olds==news)
                check=true;
            else
            {
                string temp;
                temp=news;
                olds=news;
            }
        }
    }

    if(check==false)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
