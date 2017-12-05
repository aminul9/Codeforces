#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
                    int array[1007];
                    memset(array,0,sizeof(array));
                    for(int i=0;i<n;i++)
                    {
                        int temp;
                        cin>>temp;
                        array[temp]++;
                    }


                int high=0,count=0;
                for(int i=0;i<=1000;i++)
                {
                    if(array[i]>high)
                    high=array[i];

                    if(array[i]!=0)
                    count++;
                }
                cout<<high<<" "<<count<<endl;

    }

    return 0;
}
