#include <iostream>
using namespace std;
void add_one_pt(double *x) { ++(*x); }
void add_one_rf(double &x) { ++x; }
int main() {
double a(1.23), b(0.0);
add_one_pt(&a);
add_one_rf(b);
cout << "a = " << a << ", b = " << b << endl;
return 0;
}
