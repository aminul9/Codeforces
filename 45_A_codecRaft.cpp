#include<iostream>
using namespace std;

int main()
{
    string month[13]={"#","January","February","March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string input;
    cin>>input;
    int n;
    if(input==month[1]) n=1;
    else if(input==month[2]) n=2;
    else if(input==month[3]) n=3;
    else if(input==month[4]) n=4;
    else if(input==month[5]) n=5;
    else if(input==month[6]) n=6;
    else if(input==month[7]) n=7;
    else if(input==month[8]) n=8;
    else if(input==month[9]) n=9;
    else if(input==month[10]) n=10;
    else if(input==month[11]) n=11;
    else if(input==month[12]) n=12;

    int m;
    cin>>m;


    n=m+n;
    n=n%12;
    if(n==0)n=12;
    cout<<month[n]<<endl;
    return 0;
}
