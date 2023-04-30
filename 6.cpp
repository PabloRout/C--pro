/*write a program for swappping of two numbers using pass by value*/
#include<iostream>
    using namespace std;
    void swapv(int a,int b);
    int main()
{
    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"Number before swap a= "<<a<<"b= "<<b<<endl;
    swapv(a,b);
return 0;
}
void swapv(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
        cout<<"Number after swap a= "<<a<<"b= "<<b<<endl;
}