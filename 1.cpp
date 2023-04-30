/*Write a Program to find greatest among three numbers using nested if...else statement.*/
#include<iostream>
    using namespace std;
    int main()
{
    int a,b,c;
    cout<<"Enter three number"<<endl;
    cin>>a>>b>>c;
    if (a>b)
    {
        if (a>c)
        {
            cout<<a<<" is greatest among the three number";
        }
        else
            cout<<c<<" is greatest among the three number";   
    }
    else
    {
        if (b>c)
        {
            cout<<b<<" is greatest among the three number";
        }
        else
            cout<<c<<" is greatest among the three number";
    }

return 0;
}