#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;



int main()
{
    int array[103][2];
   int n;
   cin>>n;

   for(int i=0;i<n;i++)
   {
        int num1,num2;
        cin>>num1>>num2;
        array[i][0]=num1;
        array[i][1]=num2;

   }


   bool check=false;
   for(int i=0;i<n-1;i++)
   {
        int m;
        int location1=array[i][0];
            m=array[i][0]+array[i][1];
        for(int j=i+1;j<n;j++)
           {

                if(m==array[j][0])
                {
                  if(location1==array[j][0]+array[j][1])
                  {
                    check=true;
                    break;
                  }

                }
            }

            if(check==true)
            {
                break;
            }


   }

   if(check==true)
     cout<<"YES";
     else
     cout<<"NO";

    return 0;
}
