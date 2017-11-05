#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,d,array[2007],cnt=0;
    scanf("%d %d",&n,&d);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&array[i]);
    }

        int step=0;
        for(int i=1;i<n;i++)
        {
            if(array[i]>= array[i+1])
            {
                int dist= array[i]-array[i+1];
                int multipole=(dist/d)+1;
                step+=multipole;
                array[i+1]+=multipole*d;


            }
        }


    printf("%d",step);
    return 0;
}
