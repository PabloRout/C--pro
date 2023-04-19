#include<iostream>
using namespace std;
int main()
{
    int ival = 15;
    int *p = &ival;  // p holdes the address of ival; p is a pointer to ival 

    cout<<"Old value" <<p<<endl;  // gives the address held in pointer p
    cout<<"Old value"<<*p<<endl; // gives the value that is stored in the address pointer by p

    *p = 20;

    cout<<"New value "<<p<<endl;  
    cout<<"New value "<<*p<<endl;
    return 0;
}
