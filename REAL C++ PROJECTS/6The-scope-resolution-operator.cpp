#include <iostream>
using namespace std;
int num = 10;
int main()
{
    int num = 15;
    cout << "Local num =" << num << endl;
    cout << "Global num =" << ::num << endl;
    ::num = 20;
    cout << "Local num =" << num << endl;
    cout << "Global num =" << ::num << endl;
return 0;
}
 