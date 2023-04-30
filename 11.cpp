/*write a program to find factorial of given number */
#include<iostream>
    using namespace std;
    int main()
{
    int num,fact=1;
    cout<<" Enter the number : ";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        fact=fact*i;
    }
        cout<<" Factorial of the number : "<<fact;
        
return 0;
}
