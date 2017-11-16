#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    int array[3010];
    int n;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    sort(array,array+n);


    bool check=false;

    if(array[0]>1)
        {
            cout<<1<<endl;
            check=true;

        }

    else
        for(int i=0;i<n-1;i++)
            {
                if(array[i+1]-array[i] >1)
                    {
                        cout<<array[i]+1;
                                check=true;
                                        break;
                    }

                }
    if(check==false)
        {

         if(array[n-1]=n)
         cout<<n+1;
         else
         cout<<n;
        }


 return 0;
}
