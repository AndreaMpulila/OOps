#include <iostream>
using namespace std;
void print(int i) { cout << "i = " << i << endl; }
void print(double a, double b) { cout << "a = " << a << ", b = " << b << endl; }
int main() {
void (*p)(int) = print;
void (*q)(double, double) = print;
p(2); // 'i = 2'
q(1.0,2.0); // 'a = 1, b = 2'
return 0;
}
