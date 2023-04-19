#include<iostream>
using namespace std;
int main()
{
    int ival=1024;
    int &refval=ival;
    
    //int &refval2; -->show an error because it is not iniatalized

    cout<<ival<<endl;
    cout<<refval<<endl;
    //cout<<refval2;
    refval=1000;
    cout<<"After changing the refval value"<<endl;
    cout<<ival<<endl;
    cout<<refval<<endl;
    // initialization of refereance must be an object not value
    return 0;
}

