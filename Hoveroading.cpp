#include<iostream>
using namespace std;
class A{
	public:
		int a;
		double c;
		 void display(){
		 	cout<<"Welcome To programming"<<endl;
		 }
//		 void display(int x){
//		 	a=x;
//		 	cout<<" The value of a  (integer)"<<a<<endl;
//		 }
//		 void display(double y){
//		 	c=y;
//		 	cout<<"The value of c is (double) "<<c<<endl;
//		 }
};
class B:public A{
	public:
		void display(){
			a=20;
			c=12.9;
			cout<<"The value of a and C are "<<a<<" and "<<c<< " respectively "<<endl;
		}
	
};
int main(){
	A a1;
	a1.display();
	B obj;
	obj.display();
	
}
