#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int n;
    while(cin>>n)
    {
        string a;
        cin>>a;
        int numU=0,numR=0,maxR=0,maxR1=0,count=0;
        for(int i=0;i<n;i++)
        {
            if(numR>numU)
                maxR=1;
            else
                maxR=0;

            if(a[i]=='U')
               numU++;
            else
                numR++;

           if(numR==numU)
            {
                i++;
                if(i<n)
                {
                    if(a[i]=='U')
                        numU++;
                    else
                        numR++;
                    if(numR>numU)
                        maxR1=1;
                    else
                        maxR1=0;

                if(maxR==0 && maxR1==1)
                    count++;
                else if(maxR==1 && maxR1==0)
                    count++;

                }

            }





        }


        cout<<count<<endl;
    }
    return 0;
}
