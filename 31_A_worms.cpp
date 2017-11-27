#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
   // freopen("input.txt","r",stdin);
    while(cin>>n)
    {
        int array[110];

        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }

        bool check=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if(i!=j && i!=k && j!=k)
                    if(array[i]== array[j]+array[k])
                    {
                        cout<<i+1<<" "<<j+1 <<" "<<k+1;
                        check=true;
                        break;
                    }
                }
                if(check==true)
                    break;
            }
            if(check==true)
                break;

        }

      if(check==false)
        cout<<-1;

        cout<<endl;


    }


    return 0;
}