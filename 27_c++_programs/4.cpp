/*Write a programe to prine the result for following series: 1!+2!+3!+.....+n!*/
#include<iostream>
    using namespace std;
    int main()
{
    int n,s=0,h=1;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        h=h*i;
        s=s+h;
    }
    cout<<"the sum of all the factorials are "<<s<<endl;
return 0;
}