/*write a program to find square and cube of a number using inline function*/
#include<iostream>
    using namespace std;
    inline int square(int a);
    inline int cube(int a);
    int main()
{
    int a;
    cout<<" Enter the number : ";
    cin>>a;
    cout<<" square of given number is "<<square(a)<<endl;
    cout<<" cube of given number is "<<cube(a)<<endl;

return 0;
}
int square(int a)
{
    return(a*a);
}

int cube(int a)
{
    return(a*a*a);
}
