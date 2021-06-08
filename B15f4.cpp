#include<iostream>
using namespace std;
class b15{
	public:
		int number;

		void display(){
			number=30;
			cout<<"Value of a "<<number<<endl;
		}
};
class exam{
	double test1,test2;
	public:
		exam(){
		test1=70;
		test2=100;
		}
		void setm(double t1 , double t2);
		void display();
};

void exam::setm(double t1,double t2){
	test1=t1;
	test2=t2;
}
void exam::display(){
	cout<<"The value of test one is "<<test1<<endl;
	cout<<"The value of test two is "<<test2<<endl;
}

int main(){
b15 s1,s2;
s1.number=23;
cout<<"number is "<<s1.number<<endl;
s1.display();
exam e1;
e1.display();
e1.setm(89.09,56.8);
e1.display();

}

