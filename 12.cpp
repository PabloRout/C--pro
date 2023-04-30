/*write a program to reverse a number */
#include<iostream>
    using namespace std;
    int main()
{
    int num,rev=0,rem;
    cout<<" Enter the number ";
    cin>>num;
    while (num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;

    }
    cout<<" The number is "<<rev;
    
return 0;
}
