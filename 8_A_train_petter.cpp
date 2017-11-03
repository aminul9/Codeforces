#include <iostream>
#include <string>
using namespace std;

string reverse_string(string line)
{
	string::reverse_iterator it;
	string result;
	for (it = line.rbegin(); it < line.rend(); it++)
	{
		result += *it;
	}
	return result;
}

int main()
{
    string fullstring,fastwake,secondwake;
    cin>>fullstring>>fastwake>>secondwake;

    string revfu=reverse_string(fullstring);

    bool f=false,s=false;

    int pos = fullstring.find(fastwake);
    if(pos!=-1)
    {
        pos = fullstring.find(secondwake,pos+fastwake.size());
        if(pos!=-1)
        {
            f =true;
        }
    }

     pos = revfu.find(fastwake);
    if(pos!=-1)
    {
        pos = revfu.find(secondwake,pos+fastwake.size());
        if(pos!=-1)
        {
            s =true;
        }
    }
    if(f==true && s==true)
    {
        cout<<"both"<<endl;
    }
    else if(f==true)
    {
        cout<<"forward"<<endl;
    }
    else if(s==true)
    {
        cout<<"backward"<<endl;
    }
    else
    {
        cout<<"fantasy";
    }


    return 0;
}
