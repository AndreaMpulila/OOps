#include<iostream>
#include<string>
using namespace std;

int main(){
	string f("I_love*coding Every Day  ");
	cout<<f<<endl;
	cout<<"Its Length is "<<f.length()<<endl;
	cout<<f.find(" ")<<endl;
	cout<<f.insert(24,"in The World")<<endl;
	cout<<f<<endl;
	f.replace(1,6," LOVE CPP ");
	cout<<f<<endl;
}
