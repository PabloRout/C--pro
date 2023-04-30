/*write a program to find the GCD and LMC of two number*/
#include<iostream>
    using namespace std;
    int main()
{
    int a,b,gcd,lmc;
    cout<<"Enter two number = "<<endl;
    cin>>a>>b;
    for (int i = 1; i<=a && i<=b; i++)
    {
        if (a%i == 0 && b%i == 0)
        {
            gcd = i;
        }
    }
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd<<endl;
    lmc = (a*b)/gcd;
    cout<<"lmc of "<<a<<" and "<<b<<" is "<<lmc;
return 0;
}