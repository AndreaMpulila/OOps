#include<iostream>
using namespace std;
class rectangle{
	private:
		int width;
		int length;
	public:
		void set(int w,int l)
		{
			width=w;
			length=l;
		}
		int area();
};
int rectangle::area(){
	return width*length;
}

int main(){
	rectangle r1;
	r1.set(5,6);
	cout<<r1.area();
}
