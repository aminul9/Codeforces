#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int array[100000];

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    sort(array,array+n);
    bool check=false;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+2;j<n;j++)
        {
            if(array[i]+array[i+1] >array[j] && array[i]+array[j] >array[i+1] && array[i+1]+array[j]> array[i])
            {
                check=true;
                break;
            }
        }
        if(check==true)
            break;
    }
    if(check==true)cout<<"YES";
    else cout<<"NO";
    return 0;

}
