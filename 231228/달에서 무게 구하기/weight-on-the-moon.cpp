#include <iostream>
using namespace std;
int main() {
    
    int a=13;
    double b=0.165000;

    double mul=a*b;

    cout <<fixed;
    cout.precision(6);
    cout << a << " * " << b << " = " << mul;
    return 0;
}