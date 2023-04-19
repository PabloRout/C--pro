#include<iostream>
using namespace std;

int main()
{
    float f,f1,f2,f3;
    f=3.14159;
    f1=3.14159E2;  //3.14159 x 10^2  ---> 314.159
    f2=3.14159e3;  //3.14159 x 10^3  ---> 3141.59
    f3=3.14159E-1; //3.14159 x 10^-1 ---> 0.314159
    
    cout<<f<<endl<<f1<<endl<<f2<<endl<<f3;
    return 0;
} 