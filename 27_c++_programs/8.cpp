/*write a program for swappping of two numbers using pass by reference*/
#include<iostream>
    using namespace std;
    void swapr(int &,int &);
    int main()
{
    int a,b;
    cout<<" Enter two number "<<endl;
    cin>>a>>b;
    cout<<"Number before swap a= "<<a<<"b= "<<b<<endl;
    swapr(a,b);
    cout<<"Number after swap a= "<<a<<"b= "<<b<<endl;
return 0;
}
void swapr(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}