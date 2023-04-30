/*write a program for swappping of two numbers using pass by address*/
#include<iostream>
    using namespace std;
    void swapa(int *,int*);
    int main()
{
    int a,b;
    cout<<" Enter two numbers "<<endl;
    cin>>a>>b;
    cout<<"Number before swap a= "<<a<<"b= "<<b<<endl;

    swapa(&a,&b);
    cout<<" Number after swap a= "<<a<<"b= "<<b<<endl;
return 0;
}
void swapa(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
