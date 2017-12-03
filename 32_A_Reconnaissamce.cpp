#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,d;

    while(cin>>n>>d)
    {
         int array[1005];
         for(int i=0;i<n;i++) cin>>array[i];
         sort(array,array+n);
         int count=0;
         for(int j=0;j<n-1;j++)
         {
            int temp=array[j];

            for(int i=j+1;i<n;i++)
            {
                if( array[i]-array[j] >d)
                    break;

                else
                {
                    count++;
                }

            }
         }
         cout<<count*2<<endl;


    }


    return 0;
}
