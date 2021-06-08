#include<iostream>
using namespace std;
class umoja{
	public:
		char name[25];
		int age;
		double salary;
		
		void tax();
};

//void umoja::tax(){
//double ms = salary +100;
//return ms;
//}

int main(){
	umoja m1;
	cout<<"Enter The name of employee, age and salary ";
	cin>>m1.name>>m1.age>>m1.salary;
	cout<<endl;
	cout<<"Information Entered are: "<<endl;
	cout<<m1.name<<endl<<m1.age<<endl<<m1.salary<<endl;
}
