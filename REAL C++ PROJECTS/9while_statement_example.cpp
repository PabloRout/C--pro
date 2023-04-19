#include<iostream>
using namespace std;
int main(){
    int count=1,sum=0;
    while (count<=10)
    {
        sum +=count;
        count++;
    }
    cout<<"The sum of number from 1 to 10 is"<<sum;
    return 0;
} 