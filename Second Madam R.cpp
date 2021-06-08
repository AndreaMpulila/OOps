#include<iostream>
#include <string>
using namespace std;
class employee{
	string name,company;
	int age;
	 public:
	 	void setemployee( string,string, int);
	 	void display(){
	 		cout<<"Employee Name: "<<name<<endl;
	 		cout<<"Employee Company: "<<age<<endl;
	 		cout<<"Employee Age: "<<age<<endl;
		 }
};

void employee::setemployee(string n,string c,int a){
	name=n;
	company=c;
	age=a;
}
int main()
{
	employee e1;
	e1.setemployee("andrea","Ampula Tv",24);
e1.display();
}
