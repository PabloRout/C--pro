#include<iostream>
using namespace std;
int reused =69;
int main()
{
    int unique = 0;
    cout<< reused << " " << unique << endl;
     
     int reused =0;
     cout<< reused <<" "<<unique<<endl;
     cout<<::reused<<" "<< unique<<endl; // :: is used to call the gobal value 
     return 0;
}