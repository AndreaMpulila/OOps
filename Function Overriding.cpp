//function overidding
#include<iostream>
using namespace std;

class A{
	int a;
	public:
		A(){
			a=100;
		}
		void show(){
			cout<<"Value of A is "<<a<<endl;
		}
};
class B: public A{
	int b;
	public:
		B(int m){
			b=m;
		}
		void show()
		{
		cout<<"Value of B is "<<b<<endl;
		}
};
int main(){
	A x;
	B y(600);
	x.show();
	y.show();
}
