/*Write a program to print Multiplication table from 1 to 10*/
#include<iostream>
#include<array>
    using namespace std;
    int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout<<i<<" x "<<j<<" = "<<i*j<<endl;
        }
        cout<<endl<<"\a";
    }
return 0;
}