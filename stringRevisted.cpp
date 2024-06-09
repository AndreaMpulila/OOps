#include <iostream>
#include <string>
using namespace std;
int main() {
string f(" Leading and trailing blanks ");
cout << "String f : " << f << endl;
cout << "String length : " << f.length() << endl;
cout << "String f : " << f.append("ZZZ") << endl;
cout << "String length : " << f.length() << endl;
cout << "substr(5,9) : " << f.substr(5,9) << endl;
cout << "assign(\"xyz\",0,3) : " << f.assign("xyz",0,3) << endl;
cout << "insert(1,\"abc\") : " << f.insert(1,"abc ") << endl;
string g("abc abc abd abc");
cout << "String g : " << g << endl;
cout << "replace(12,1,\"xyz\") : " << g.replace(12,1,"xyz") << endl;
cout << "replace(4,3,\"xyz\",2): " << g.replace(4,3,"xyz",2) << endl;
cout << "replace(4,3,\"ijk\",1): " << g.replace(4,3,"ijk",1) << endl;
cout << "find(\"abd\",1) : " << g.find("abd",1) << endl;
cout << "find(\"xyzb\") : " << g.find("xyzb") << endl;
return 0;
}
