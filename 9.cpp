/*write a program to find out sum of four numbers using defult argument passing*/
#include<iostream>
    using namespace std;
    int add(int a, int b,int c=0,int d=0);
    int main()
{
    int s1,s2,s3;

    s1=add(10,20);
    s2=add(10,20,30);
    s3=add(10,20,30,40);
    cout<<s1<<endl<<s2<<endl<<s3<<endl;
    
return 0;
}
int add(int a, int b,int c,int d)
{
    return(a+b+c+d);
}
