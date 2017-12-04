#include<iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        int array[105];
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }

        int index1,index2,temp=10000;


        for(int i=0;i<n-1;i++)
        {
            int temp1=abs(array[i]-array[i+1]);
            if(temp>temp1)
            {
              temp=temp1;
              index1=i;
              index2=i+1;
            }
        }

        int temp1=abs(array[0]-array[n-1]);
        if(temp>temp1)
        {
            index1=0;
            index2=n-1;
        }

        cout<<index1+1<<" "<<index2+1<<endl;


    }
    return 0;
}
