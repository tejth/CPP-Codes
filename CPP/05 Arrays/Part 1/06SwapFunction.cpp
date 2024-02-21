#include <iostream>
using namespace std;

void swapfunc1(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapfunc2(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
void swapfunc3(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
int main()
{
    int a = 4;
    int b = 5;
    swapfunc1(a, b);
    cout << a << " " << b << endl;
    swapfunc2(a, b);
    cout << a << " " << b << endl;
    swapfunc2(a, b);
    cout << a << " " << b << endl;
    return 0;
}