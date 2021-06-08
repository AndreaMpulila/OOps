//functon overidiing 2
#include<iostream>
#include<string>
using namespace std;
class Darasa{
	protected:
	char name;
	int age;
	public:
		void setdata(char n, int a){
			name=n;
			age=a;
			cout<<"The name  entered is "<<name<<" with age of "<<age;
		}
	
};
class Kanisa: public Darasa{
	char imani;
	int huduma;
	public:
		void setdata( char n, int a){
			imani=n;
			huduma=a;
		}
		void show(){
			cout<<" Imani ya "<<imani<<" Amehudumia kwa miaka "<<huduma<<endl;
		}
};

int main(){
	Darasa d;
	Kanisa k1;
	d.setdata('A',45);
	k1.setdata('B',24);
	k1.show();
}
