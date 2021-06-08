#include <fstream>
using namespace std;
int main() {
ofstream fout("data.dat");
fout << "Hello Programmers!\n My name is Andrea!\nIt is My first time to Run File stream" << endl;
fout.close();
return 0;
}
