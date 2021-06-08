//function overloading in C++ sample program
#include<iostream>
using namespace std;
class A{
	int a;
	public:
		void show();
		void show(int z);
};
void A::show(){
	a=10;
	cout<<"the value of a :"<<a<<endl;
}
void A::show(int z){
	a=z;
	cout<<"The value of a is  "<<a<<endl;
}
int main(){
	A ob1;
	ob1.show();
	ob1.show(500);
}
