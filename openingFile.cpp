#include <iostream>
#include <fstream>
using namespace std;
int main() {
ifstream fin("data.dat");
if (! fin.is_open()) {
cout << "Error opening the file data.dat." << endl;
return -1;
}
cout<<fin;
double mean = 0.0, x;
int n = 0;
while ( fin >> x ) {
mean += x;
n++;
}
fin.close();
if (n > 0) mean /= n;
cout << "The mean of the " << n << " numbers is " << mean << "." << endl;

return 0;
}
