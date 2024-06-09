#include<iostream>
#include<string>
using namespace std;
class Employee{
	string name;
	double salary;
	int age;
	public:
	void set(string n);
	void display();
};
void Employee::set(string n){
	name=n;
}
void Employee::display(){
	cout<<name<<endl;
}

int main(){
	Employee e;
	e.set("Andrea James Mpulila");
	e.display();
}
