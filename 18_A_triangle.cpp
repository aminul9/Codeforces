#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;  //0 0 1 0 4 1   NEITHER             //0 0 1 0 3 1  ALMOST



    int abx=x2-x1;
    int aby=y2-y1;
    int acx=x3-x1;
    int acy=y3-y1;
    int bcx=x3-x2;
    int bcy=y3-y2;
    if( ((abx*acx)+(aby*acy)==0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)!=0)  || ((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)==0 && (acx*bcx)+(acy*bcy)!=0) ||((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)==0) )
            {cout<<"RIGHT";return 0;}


            //first x,y;
    int temp=x1;
    x1=x1+1;
     abx=x2-x1;
     aby=y2-y1;
     acx=x3-x1;
     acy=y3-y1;
     bcx=x3-x2;
     bcy=y3-y2;

    if( ((abx*acx)+(aby*acy)==0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)!=0)  || ((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)==0 && (acx*bcx)+(acy*bcy)!=0) ||((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)==0) )
    {
        cout<<"ALMOST";
        return 0;
    }
    x1=x1-2;
     abx=x2-x1;
     aby=y2-y1;
     acx=x3-x1;
     acy=y3-y1;
     bcx=x3-x2;
     bcy=y3-y2;

    if( ((abx*acx)+(aby*acy)==0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)!=0)  || ((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)==0 && (acx*bcx)+(acy*bcy)!=0) ||((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)==0) )
    {
        cout<<"ALMOST";
        return 0;
    }
    x1=temp;
    temp=y1;
    y1+=1;
     abx=x2-x1;
     aby=y2-y1;
     acx=x3-x1;
     acy=y3-y1;
     bcx=x3-x2;
     bcy=y3-y2;

    if( ((abx*acx)+(aby*acy)==0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)!=0)  || ((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)==0 && (acx*bcx)+(acy*bcy)!=0) ||((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)==0) )
    {
        cout<<"ALMOST";
        return 0;
    }
    y1-=2;
     abx=x2-x1;
     aby=y2-y1;
     acx=x3-x1;
     acy=y3-y1;
     bcx=x3-x2;
     bcy=y3-y2;
    if( ((abx*acx)+(aby*acy)==0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)!=0)  || ((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)==0 && (acx*bcx)+(acy*bcy)!=0) ||((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)==0) )
    {
        cout<<"ALMOST";
        return 0;
    }
     y1=temp;

            //end first x,y




            //second x,y;
     temp=x2;
     x2=x2+1;
     abx=x2-x1;
     aby=y2-y1;
     acx=x3-x1;
     acy=y3-y1;
     bcx=x3-x2;
     bcy=y3-y2;

    if( ((abx*acx)+(aby*acy)==0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)!=0)  || ((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)==0 && (acx*bcx)+(acy*bcy)!=0) ||((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)==0) )
    {
        cout<<"ALMOST";
        return 0;
    }
    x2=x2-2;
     abx=x2-x1;
     aby=y2-y1;
     acx=x3-x1;
     acy=y3-y1;
     bcx=x3-x2;
     bcy=y3-y2;

    if( ((abx*acx)+(aby*acy)==0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)!=0)  || ((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)==0 && (acx*bcx)+(acy*bcy)!=0) ||((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)==0) )
    {
        cout<<"ALMOST";
        return 0;
    }
    x2=temp;
    temp=y2;
    y2+=1;
     abx=x2-x1;
     aby=y2-y1;
     acx=x3-x1;
     acy=y3-y1;
     bcx=x3-x2;
     bcy=y3-y2;

    if( ((abx*acx)+(aby*acy)==0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)!=0)  || ((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)==0 && (acx*bcx)+(acy*bcy)!=0) ||((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)==0) )
    {
        cout<<"ALMOST";
        return 0;
    }
    y2-=2;
     abx=x2-x1;
     aby=y2-y1;
     acx=x3-x1;
     acy=y3-y1;
     bcx=x3-x2;
     bcy=y3-y2;
    if( ((abx*acx)+(aby*acy)==0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)!=0)  || ((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)==0 && (acx*bcx)+(acy*bcy)!=0) ||((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)==0) )
    {
        cout<<"ALMOST";
        return 0;
    }
     y2=temp;

            //end second x,y


            //third x,y;
     temp=x3;
     x3=x3+1;
     abx=x2-x1;
     aby=y2-y1;
     acx=x3-x1;
     acy=y3-y1;
     bcx=x3-x2;
     bcy=y3-y2;

    if( ((abx*acx)+(aby*acy)==0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)!=0)  || ((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)==0 && (acx*bcx)+(acy*bcy)!=0) ||((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)==0) )
    {
        cout<<"ALMOST";
        return 0;
    }
    x3=x3-2;
     abx=x2-x1;
     aby=y2-y1;
     acx=x3-x1;
     acy=y3-y1;
     bcx=x3-x2;
     bcy=y3-y2;

    if( ((abx*acx)+(aby*acy)==0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)!=0)  || ((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)==0 && (acx*bcx)+(acy*bcy)!=0) ||((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)==0) )
    {
        cout<<"ALMOST";
        return 0;
    }
    x3=temp;
    temp=y3;
    y3+=1;
     abx=x2-x1;
     aby=y2-y1;
     acx=x3-x1;
     acy=y3-y1;
     bcx=x3-x2;
     bcy=y3-y2;

    if( ((abx*acx)+(aby*acy)==0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)!=0)  || ((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)==0 && (acx*bcx)+(acy*bcy)!=0) ||((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)==0) )
    {
        cout<<"ALMOST";
        return 0;
    }
    y3-=2;
     abx=x2-x1;
     aby=y2-y1;
     acx=x3-x1;
     acy=y3-y1;
     bcx=x3-x2;
     bcy=y3-y2;
    if( ((abx*acx)+(aby*acy)==0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)!=0)  || ((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)==0 && (acx*bcx)+(acy*bcy)!=0) ||((abx*acx)+(aby*acy)!=0 && (abx*bcx)+(aby*bcy)!=0 && (acx*bcx)+(acy*bcy)==0) )
    {
        cout<<"ALMOST";
        return 0;
    }
     y3=temp;

            //end second x,y





    cout<<"NEITHER";

    return 0;
}
