#include<iostream>
using namespace std;

class classB;
class classA{
	public:
	int a;
	friend bool isequal(const classA &, const classB &);
};
class classB{
	public:
	int b;
	friend bool isequal(const classA &,const classB &);
};

bool isequal(const classA &A, const classB &B){
	A.a==B.b;
}
main(){
	classA moja;
	classB mbili;
	moja.a=90;
	mbili.b=90;
	isequal(moja.a,mbili.b);
}
