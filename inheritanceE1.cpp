#include<iostream>
#include<string>
using namespace std;
class baba{
	int a;
	public:
		void display(){
			a=5;
			cout<<a<<endl;
		}
};
class mama:public baba{
	int b;
	public:
		void onyesha(){
			b=10;
			cout<<b<<endl;
		}
};
class student{
	string name;
	int age;
	int darasa;
	public:
		void studentSet( string n, int a, int d){
			name=n;
			age=a;
			darasa=d;
		}
		void showStudent();
};
void student::showStudent(){
	cout<<name<<" is "<<age<<" old and is in Level "<<darasa<<endl;
}
class mtoto: public mama, public student{
	int age;
	public:
		void show(){
			age=90;
			cout<<"The Age of i is "<<age<<endl;
		}
};
int main()
{
	mtoto m1;
	m1.display();
	m1.onyesha();
	m1.show();
//	m1.studentSet("Andrea",25,7);
//	m1.showStudent();
//	m1.display();
}
