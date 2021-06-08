#include <iostream>
#include<fstream>
#include <string>
using namespace std;
struct student {
string name, firstname;
int year;
};
int main() {
int N;
ofstream fout("Taarifa.txt");
cout << "Number of students: "; cin >> N;
student *studlist = new student[N];
for (int i = 0; i < N; i++) {
	cout<<"Enter LastName, FirstName And yearof  the "<<i<<" student: ";
cin >> studlist[i].name >> studlist[i].firstname >> studlist[i].year;
fout<<studlist[i].name<<"  "<<studlist[i].firstname<<"  "<<studlist[i].year<<endl;
}
return 0;
}
