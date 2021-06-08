#include<iostream>
#include<iomanip>
#include <string>
using namespace std;

class student{
	string fname;
	string lname;
	int age;
	public:
	void create(const string &fn, const string &ln,int y,const string adr);
	void print();
};

void student::create(const string &fn, const string &ln,int y, const string address){
	fname=fn;
	lname=ln;
	age=y;
	string adr=address;
}

void student::print(){
	cout<<" "<<fname<<"  "<<lname<<setw(5)<<age<<endl;
}

int main(){
	student s1;int a,i=0;
	string n,l;
	while(i<4){
		cout<<"Enter First Name, Lastname, Age: ";
		cin>>n>>l>>a;
		s1.create(n,l,a,"BOX 705");
		s1.print();
		i++;
	}
	
}
