#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 7;

    cout << " a & b " << (a & b) << endl;
    cout << " a | b " << (a | b) << endl;
    cout << " a ^ b " << (a ^ b) << endl;
    cout << " ~b " << (~b) << endl;

    cout << "(17>>1) is " << (17 >> 1) << endl;
    cout << "(17>>2) is " << (17 >> 2) << endl;
    cout << "(17<<1) is " << (17 << 1) << endl;
    cout << "(17<<2) is " << (17 << 2) << endl;
}